# -*- coding: utf-8 -*-
#exercicio 2
import rclpy
from rclpy.node import Node

import px4_msgs.msg as px4_msgs
import std_srvs.srv as std_srvs

import glassy_msgs.msg as glassy_msgs
import math

import scipy.io as sio

# allowed libraries
import numpy as np
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point


class GlassyChallenge(Node):
    def __init__(self):
        """
        Class
        """
        super().__init__('glassy_challenge')

        # initialize all the variables to be used
        self.yaw_rate = 0.0
        self.surge = 0.0
        self.sway = 0.0
        self.yaw = 0.0

        self.initial_yaw = 0.0

        self.x = 0.0
        self.y = 0.0

        self.initial_x = 0.0
        self.initial_y = 0.0
        
        # Estado atual
        self.p=0
        self.v=0
        self.psi=0

        # Direção desejada — linha reta no yaw inicial
        self.psi_d = 0
        self.v_d = 0
        self.p_d = 0
        
        self.J=0
        self.J_d=0
        self.J2d=0
        
        
        # Erro de posição projetado na direção desejada
        self.e_p = 0
        

        # Erro longitudinal (surge): componente do erro de posição na direção do movimento
        self.v_norm = 0
        self.e_np = 0
        
        # Acumular integral
        self.ie_np =0
        
        # Direção do erro (opcional, se usares e_dp)
        self.e_dp_aux =0
        self.e_dp = 0
        
        # Erro de velocidade longitudinal
        self.e_V = 0
        self.e_Va = 0
        self.u_ref=1
        
        # Acumular integral (precisas inicializar self.ie_Va antes no __init__)
        self.ie_Va =0
        
        # Guardar para o controlo
        self.e_np = 0
        self.e_Va =0      


        self.e_yaw = 0
        self.e_om = 0 

        self.e_dp = 0.0  # se não estiveres a usar deriva longitudinal    
        self.e_dv = 0.0  # idem para velocidade lateral
        
        self.int_e_psi = 0.0
        self.int_e_u   = 0.0
        self.time_prev = self.get_clock().now().nanoseconds * 1e-9
        
        self.mission_start_time=0
        
        self.dt_aux=0
        self.om_d = 0.0  # yaw-rate desejado (feed-forward)



























        self.is_active = False

        # used to calculate the score... ( you may test different coeficients to see how they affect the score, and different max_speeds)

        self.max_velocity = 3.0
        self.total_dist_coef = 1.0
        self.cross_dist_coef = 0.001
        self.vel_coef = 2.0


        #auxiliary variables
        #self.time_prev = 0.0
        self.cross_track_distance = 0.0
        self.velocity_above_max = 0.0

    	#Gains for nonlinear controller TBD
        #direction
        self.kyaw_delta = 2; 
        self.kom_delta = 1;   
        self.kdp_delta = 1;     	
        self.kdv_delta = 0;   
    	
    	#surge
        self.kp_n = 3.0;  
        self.kpi_n = 0.600; 
        self.kV_n = 12.0;  
        self.kVi_n = 2; 

        #rudder
        self.delta_max = 60*math.pi/180;
        
        self.debug_log = {
            "time": [],
            "e_np": [],
            "ie_np": [],
            "e_Va": [],
            "ie_Va": [],
            "e_yaw": [],
            "e_om": [],
            "e_dp": [],
            "e_dv": [],
            "motor_value": [],
            "rudder_value": [],
            "surge": [],
            "yaw": [],
            "u_d": [], 
            "om_d": []
            
            }
                
    







        # create publishers for torque and thrust setpoints
        self.actuators_publisher_ = self.create_publisher(glassy_msgs.Actuators, 'glassy/actuators', 1)

        # create subscriber for the state of the vehicle
        self.state_subscriber_ = self.create_subscription(glassy_msgs.State, 'glassy/state', self.state_subscription_callback, 1)

        # create subscriber for the mission status
        self.mission_status_subscriber_ = self.create_subscription(glassy_msgs.MissionInfo, 'glassy/mission_status', self.mission_status_subscription_callback, 1)


        # create timer
        self.timer_control_ = self.create_timer(1.0/30.0, self.myChallengeController)
        self.timer_control_.cancel();
    
        self.time_of_last_mission_status_msg_received = None;
        self.counter= False;


        self.marker_pub = self.create_publisher(Marker, 'visualization_marker', 1)



    def state_subscription_callback(self, msg):
        """
        Receives the state message and updates the local variables that store the state of the vehicle.
        """

        # Get the yaw and yaw rate (most important for the challenge)
        self.yaw = msg.yaw
        self.yaw_rate = msg.yaw_rate
        self.surge = msg.v_body[0]
        self.sway = msg.v_body[1]
        self.x = msg.p_ned[0]
        self.y = msg.p_ned[1]
        
        
        

        # calculate the integral of the cross track distance
        self.cross_track_distance += np.abs(( np.cos(self.initial_yaw) * (self.initial_y-self.y) - np.sin(self.initial_yaw) * (self.initial_x - self.x)))**2 * self.dt_aux

        # calculate the integral of the velocity above the max velocity
        self.velocity_above_max += np.maximum(np.sqrt(self.surge**2 + self.sway**2) - self.max_velocity, 0)**2 * self.dt_aux

        

        




    def mission_status_subscription_callback(self, msg):
        """
        Checks whether the mission is active or not.
        """
        
        if self.is_active:
            if msg.mission_mode != glassy_msgs.MissionInfo.SUMMER_CHALLENGE:
                self.timer_control_.cancel()
                self.is_active = False

                self.save_debug_to_mat()
                

                


                get_projection_on_line = np.dot([self.x - self.initial_x, self.y - self.initial_y], [np.cos(self.initial_yaw), np.sin(self.initial_yaw)])

		
                self.get_logger().info('Mission ended')
                self.get_logger().info('ALONG TRACK DISTANCE (larger is better): ' + str(get_projection_on_line))
                self.get_logger().info('CROSS TRACK DISTANCE SQUARED INTEGRAL (lower is better): ' + str(self.cross_track_distance))
                self.get_logger().info('VELOCITY OVER MAX SQUARED INTEGRAL (lower is better): ' + str(self.velocity_above_max))
                self.get_logger().info('ALONG TRACK DISTANCE SCORE: ' + str(get_projection_on_line * self.total_dist_coef))
                self.get_logger().info('CROSS TRACK DISTANCE INTEGRAL SCORE: ' + str(- self.cross_dist_coef * self.cross_track_distance))
                self.get_logger().info('VELOCITY OVER MAX INTEGRAL SCORE: ' + str(- self.vel_coef * self.velocity_above_max))
                self.get_logger().info('TOTAL SCORE: ' + str(get_projection_on_line * self.total_dist_coef - self.cross_dist_coef * self.cross_track_distance - self.vel_coef * self.velocity_above_max))

        else:
            if msg.mission_mode == glassy_msgs.MissionInfo.SUMMER_CHALLENGE:
                self.timer_control_.reset()
                self.is_active = True
                self.publish_reference_line(length=200.0)   # <── NOVO


                # reset the initial mission values
                # HERE YOU CAN ADD SLIGHT OFFSETS TO THE INITIAL VALUES, TO MAKE THE CHALLENGE MORE INTERESTING/COMPLICATED, AND TEST YOUR CONTROLLER BETTER
                # Ex: self.initial_yaw = self.initial_yaw + 0.1 (around 5º offset)
                self.initial_x = self.x
                self.initial_y = self.y
                self.initial_yaw = self.yaw

                # these are used for evaluation purposes
                self.time_prev = self.get_clock().now().nanoseconds/1e9
                self.cross_track_distance = 0.0
                self.velocity_above_max = 0.0
                self.mission_start_time = self.get_clock().now().nanoseconds * 1e-9



    def myChallengeController(self):
        """
        Implement the controller for the challenge here.
        (it will run at 30Hz)
        # """
        #     # A) dt
        # now = self.get_clock().now().nanoseconds * 1e-9
        # dt  = max(now - self.time_prev, 1e-3)
        # self.time_prev = now
    
        # # B) Actualizar estados/erros
        # self.define_states(dt)
    
        # # C) LOS: rumo de referência
        # L       = 3.0               # look-ahead [m]
        # k_cte   = 1.0
        # psi_ref = self.initial_yaw + math.atan2(-k_cte*self.e_dp, L)
    
        # # D) PID de rumo → rudder
        # e_psi = math.atan2(math.sin(psi_ref - self.yaw),
        #                    math.cos(psi_ref - self.yaw))
        # self.int_e_psi += e_psi * dt
        # kp_psi, ki_psi, kd_psi = 4.0, 0.5, 0.8
        # delta_cmd = kp_psi*e_psi + ki_psi*self.int_e_psi - kd_psi*self.yaw_rate
    
        # delta_max_rad = 60*math.pi/180
        # rudder_value  = np.clip(delta_cmd / delta_max_rad, -1.0, 1.0)
    
        # # E) PID de velocidade → motor
        # u_ref = 1.2                                   # m/s
        # e_u   = u_ref - self.surge
        # self.int_e_u += e_u * dt
        # kp_u, ki_u = 3.0, 0.8
        # n_cmd = kp_u*e_u + ki_u*self.int_e_u
        # motor_value = np.clip(n_cmd, 0.0, 1.0)
    
        # # F) Publicar e registar
        # self.save_debug(motor_value, rudder_value)
        # self.publish_actuators(motor_value, rudder_value)
        
        # Implement your controller here 
        # You can use the variables self.yaw, self.yaw_rate, self.surge, self.sway, self.x, self.y (only a subset of these is actually needed)
        # You also have access to the initial position and yaw (self.initial_x, self.initial_y, self.initial_yaw)
        # You can also use the libraries numpy and scipy
        # You can add more variables to the class to keep for example the previous errors/error integral,...
        # Please do not overcomplicate, the challenge is simple (~ 20 lines of code should be enough).
        # Please, use this function and if you need, add variables to the class constructor, do not change ANY other function.

        # Variables available, and corresponding units:
        # yaw -> [-pi, pi] (rad)
        # yaw_rate (rad/s)
        # surge (m/s)
        # sway (m/s)
        # x, y (m)

        # You also have access to the initial yaw, and position:
        # initial_yaw [-pi, pi] (rad)
        # initial_x, initial_y (m)
        
        # self.get_logger().info('Surge: ' + str(self.surge) )
        # self.get_logger().info('Sway: ' + str(self.sway) )
        # self.get_logger().info('Yaw: ' + str(self.yaw) )
        
        

        
        current_time = self.get_clock().now().nanoseconds/1e9
        dt = (current_time - self.time_prev)
        
        self.time_prev=current_time
        self.dt_aux=dt
        
        
        self.define_states(dt)

        # #********************************************************************************
        # #
        # #
        # #
        # #
        # #                            YOUR CALCULATIONS GO HERE
        # #                                   GOOD LUCK!
        # #
        # #
        # #
        # #
        # #
        # #*********************************************************************************


        # # After finishing your calculations, fill the following variables with the values you want to publish, and thats it, you are done.

        # # Fill these values in please (motor should be between [0,1]) (max thrust is reduced, to avoid accidents)
        #n_norm = (-self.kp_n * e_np - self.kpi_n * ie_np  - self.kV_n * e_Va - self.kVi_n * ie_Va)
        
        
        
        u_d = np.linalg.norm(self.v_d)   # ≈ R*omn no círculo (~1.88 m/s)
        kff = 0.45

        #motor_value = np.clip(n_norm, 0.0, 1.0)
        n_norm = kff*u_d-( self.kp_n  * self.e_np
                 + self.kpi_n * self.ie_np)
                 #+ self.kV_n  * self.e_Va
                 # self.kVi_n * self.ie_Va )        
        
        motor_value = np.clip(n_norm, 0.00, 1.0)
                
        self.get_logger().info(
        f"n_norm = -({self.kp_n} * {self.e_np:.3f}) "
        f"- ({self.kpi_n} * {self.ie_np:.3f}) "
        f"- ({self.kV_n} * {self.e_Va:.3f}) "
        f"- ({self.kVi_n} * {self.ie_Va:.3f}) = {n_norm:.3f}"
        f"motor_value= {motor_value:.3f}"
        )

        
        
        
        # # Fill (rudder should be between [-1,1])
        
        delta_norm = (self.kyaw_delta * self.e_yaw
                       + self.kom_delta * self.e_om
                      - self.kdp_delta * self.e_dp
                      - self.kdv_delta * self.e_dv)
        
        rudder_value = np.clip(delta_norm, -1.0, 1.0)  # sem * self.delta_max
        
        self.get_logger().info(
        f"delta_norm = -({self.kyaw_delta} * {self.e_yaw:.3f}) "
        f"- ({self.kom_delta} * {self.e_om:.3f}) "
        f"- ({self.kdp_delta} * {self.e_dp:.3f}) "
        f"- ({self.kdv_delta} * {self.e_dv:.3f}) = {delta_norm:.3f}"
        f"rudder_value= {rudder_value:.3f}"
        )
        
    
        
        self.save_debug(motor_value,rudder_value)
    
        self.publish_actuators(motor_value, rudder_value)



    #
    def publish_actuators(self, motor_value, rudder_value):
        """
        Takes the motor and rudder values. Clips and publishes them.
        """
        #clip values
        motor_value = np.clip(motor_value, 0.0, 1.0)
        rudder_value = np.clip(rudder_value, -1.0, 1.0)

        msg_actuators = glassy_msgs.Actuators()

        msg_actuators.header.stamp = self.get_clock().now().to_msg()
        msg_actuators.thrust = motor_value
        msg_actuators.rudder = rudder_value


        self.actuators_publisher_.publish(msg=msg_actuators)


    def define_states(self, dt):
        
        current_time = self.get_clock().now().nanoseconds * 1e-9
        self.update_reference(current_time, ref_mode=1)   # 1: linha, 2: círculo

        
        # Estado atual
        self.v = np.array([self.surge, self.sway])
        self.p = np.array([self.x, self.y])
        self.psi = self.yaw
    
        # Referência: linha reta desde a posição inicial, na direção do yaw inicial
        # self.psi_d = self.initial_yaw
        # self.v_d = np.array([1.0, 0.0])
        # self.p_d = np.array([self.initial_x, self.initial_y])
    
        # Matrizes de rotação
        self.J = np.array([[np.cos(self.psi), -np.sin(self.psi)],
                           [np.sin(self.psi),  np.cos(self.psi)]])
        self.J_d = np.array([[np.cos(self.psi_d), -np.sin(self.psi_d)],
                             [np.sin(self.psi_d),  np.cos(self.psi_d)]])
    
        # Erro de posição no referencial desejado
        self.e_p = np.dot(self.J_d.T, self.p - self.p_d)
    
        # Avanço ao longo da linha (não truncado)
        #self.e_np = np.dot(self.e_p.T, self.v) / (np.linalg.norm(self.v) + 1e-6)
        self.e_np = self.e_p[0]  # along-track no frame desejado

    
        # Erro lateral direto
        self.e_dp = self.e_p[1]
    
        # Erro de velocidade
        v_rel = self.v - self.v_d
        self.e_V = np.dot(self.J_d.T, np.dot(self.J, v_rel))
        self.e_Va = self.e_V[0]
        self.e_dv = self.e_V[1]
    
        # Heading
        self.e_yaw = np.arctan2(np.sin(self.psi_d - self.psi),
                                np.cos(self.psi_d - self.psi))
        
        # self.e_om = -self.yaw_rate
        self.e_om =self.om_d -self.yaw_rate

            
        self.ie_np += self.e_np * dt
        self.ie_Va += self.e_Va * dt
        self.ie_np = np.clip(self.ie_np, -5.0, 5.0)
        self.ie_Va = np.clip(self.ie_Va, -2.0, 2.0)


        
        
        
        
        
        
        
        
        
    


    def save_debug(self, motor_value, rudder_value):
        
        
        self.debug_log["time"].append(self.get_clock().now().nanoseconds / 1e9)
        self.debug_log["e_np"].append(self.e_np)
        self.debug_log["ie_np"].append(self.ie_np)
        self.debug_log["e_Va"].append(self.e_Va)
        self.debug_log["ie_Va"].append(self.ie_Va)
        
        self.debug_log["e_yaw"].append(self.e_yaw)
        self.debug_log["e_om"].append(self.e_om)
        self.debug_log["e_dp"].append(self.e_dp)
        self.debug_log["e_dv"].append(self.e_dv)
        
        self.debug_log["motor_value"].append(motor_value)
        self.debug_log["rudder_value"].append(rudder_value)
        self.debug_log["surge"].append(self.surge)
        self.debug_log["yaw"].append(self.yaw)
        
        self.debug_log["u_d"].append(np.linalg.norm(self.v_d))
        self.debug_log["om_d"].append(self.om_d)

        
        
        
    def save_debug_to_mat(self):
        sio.savemat("/home/diogo/Documents/GitHub/TeseGlassy/debug.mat", self.debug_log)
        self.get_logger().info("Debug data saved")
            
        
        
        
    def publish_reference_line(self, length=200.0):
        """
        Desenha uma linha de 'length' metros a partir da posição inicial
        seguindo o yaw inicial.
        """
        # extremos da linha no plano NED
        x0, y0 = self.initial_x, self.initial_y
        x1 = x0 + length * math.cos(self.initial_yaw)
        y1 = y0 + length * math.sin(self.initial_yaw)
    
        m = Marker()
        m.header.frame_id = 'world'          # ou 'map', consoante a tua world
        m.header.stamp    = self.get_clock().now().to_msg()
        m.ns   = 'guideline'
        m.id   = 0
        m.type = Marker.LINE_STRIP
        m.action = Marker.ADD
        m.scale.x = 0.05                     # espessura da “linha” em metros
        m.color.r, m.color.g, m.color.b, m.color.a = 1.0, 0.0, 0.0, 1.0  # vermelho
    
        m.points = [Point(x=x0, y=y0, z=0.0),
                    Point(x=x1, y=y1, z=0.0)]
    
        # Publica algumas vezes para garantir que o Gazebo/SDF apanha
        for _ in range(3):
            self.marker_pub.publish(m)





    def update_reference(self, t_now: float,  ref_mode) -> None:
        """
        Parameters
        ----------
        t_now    : float   tempo absoluto [s] (usa current_time)
        ref_mode : int     1 = linha recta   |   2 = círculo
        
        Actualiza:
            • self.p_d   (posição desejada [x, y] inercial)
            • self.v_d   (velocidade desejada [u, v] no body-frame)
            • self.psi_d (rumo desejado)
        """
    
        # tempo desde o arranque da missão
        tau = t_now - self.mission_start_time          # [s]
    
        # ------------- 1 · Linha recta ---------------------------------------
        if ref_mode == 1:
            v_ref = 1.0                                # m/s
            self.p_d = np.array([
                self.initial_x + v_ref * tau * np.cos(self.initial_yaw),
                self.initial_y + v_ref * tau * np.sin(self.initial_yaw)
            ])
            self.v_d  = np.array([v_ref, 0.0])         # já no body
            self.psi_d = self.initial_yaw
            self.om_d  = 0.0                     
            return                                     # <─ rápido
    
        # ------------- 2 · Círculo ------------------------------------------
        Rad = 6.0               # raio [m]
        omn = 2*np.pi/20        # rad/s  (1 volta em 20 s)
        self.om_d = omn
    
        # posição inercial
        x_n =  Rad * np.cos(omn * tau)
        y_n =  Rad * np.sin(omn * tau)
        self.p_d = np.array([self.initial_x + x_n,
                             self.initial_y + y_n])
    
        # velocidade inercial
        u_n = -Rad * omn * np.sin(omn * tau)
        v_n =  Rad * omn * np.cos(omn * tau)
    
        # rumo desejado = tangente ao círculo
        self.psi_d = np.arctan2(v_n, u_n)
    
        # rotação NED → body (transposta de R_bn)
        R_nb_T = np.array([[ np.cos(self.psi_d),  np.sin(self.psi_d)],
                           [-np.sin(self.psi_d),  np.cos(self.psi_d)]])
    
        v_body = R_nb_T @ np.array([u_n, v_n])
        self.v_d = v_body          # [surge_ref, sway_ref]
        

    
        

def main(args=None):
    rclpy.init(args=args)

    test = GlassyChallenge()

    test.get_logger().info('Glassy Challenge node started')
    rclpy.spin(test)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    test.destroy_node()
    rclpy.shutdown()
