# -*- coding: utf-8 -*-
#exercicio 2
import rclpy
from rclpy.node import Node

import px4_msgs.msg as px4_msgs
import std_srvs.srv as std_srvs

import glassy_msgs.msg as glassy_msgs
import math

# allowed libraries
import numpy as np


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
        
        # Acumular integral (precisas inicializar self.ie_Va antes no __init__)
        self.ie_Va =0
        
        # Guardar para o controlo
        self.e_np = 0
        self.e_Va =0      




































        self.is_active = False

        # used to calculate the score... ( you may test different coeficients to see how they affect the score, and different max_speeds)

        self.max_velocity = 3.0
        self.total_dist_coef = 1.0
        self.cross_dist_coef = 0.001
        self.vel_coef = 2.0


        #auxiliary variables
        self.time_prev = 0.0
        self.cross_track_distance = 0.0
        self.velocity_above_max = 0.0

    	#Gains for nonlinear controller TBD
        #direction
        self.kyaw_delta = 2; 
        self.kom_delta = 1;   
        self.kdp_delta = 1;     	
        self.kdv_delta = 0;   
    	
    	#surge
        self.kp_n = 2.0;  
        self.kpi_n = 0.500; 
        self.kV_n = 10.0;  
        self.kVi_n = 5; 

        #rudder
        self.delta_max = 60*math.pi/180;
        

       # # --------- PREPARAR VARIÁVEIS DE ESTADO ---------#
       #  self.p = eta[0:2]            # posição [x, y]
       #  self.psi = eta[2]            # orientação (ângulo)
       #  self.v = nu[0:2]             # velocidade linear
       #  self.om = nu[2]              # velocidade angular

       #  # Matriz de rotação
       #  self.J = np.array([
       #      [np.cos(psi), -np.sin(psi)],
       #      [np.sin(psi),  np.cos(psi)]
       #  ])

       #  self.J2d = J[0:2, 0:2]       # submatriz 2x2

       #  # --------- VARIÁVEIS INTEGRAIS ---------
       #  ie_p = ie_x[0:2]
       #  ie_Va = ie_x[2]
       #  ie_yaw = ie_x[3]
        
       #  # --------- REFERÊNCIAS ---------
       #  p_d = eta_d[0:2]
       #  psi_d = eta_d[2]
        
       #  v_d = nu_d[0:2]
       #  om_d = nu_d[2]
        
       #  Jd = np.array([
       #      [np.cos(psi_d), -np.sin(psi_d)],
       #      [np.sin(psi_d),  np.cos(psi_d)]
       #  ])
       #  Jd2d = Jd[0:2, 0:2]
        
       #  # --------- CÁLCULO DOS ERROS ---------
        
       #  # Erro de posição projetado
       #  e_p = np.dot(Jd2d.T, p - p_d)
        
       #  # Componente normal do erro de posição
       #  e_np = max(np.dot(e_p.T, v) / np.linalg.norm(v), 0)
        
       #  # Componente normal do erro integral de posição
       #  ie_np = max(np.dot(ie_p.T, v) / np.linalg.norm(v), 0)
        
       #  # Direção do erro de posição
       #  e_dp_aux = e_p / np.linalg.norm(e_p)
       #  e_dp = e_dp_aux[1]
        
       #  # Erro de velocidade projetado
       #  e_v = np.dot(Jd2d.T, np.dot(J2d, v - v_d))
        
       #  # Norma do erro de velocidade
       #  e_nv = np.linalg.norm(e_v)
        
       #  # Direção do erro de velocidade
       #  e_dv_aux = e_v / e_nv
       #  e_dv = e_dv_aux[1]
        
        
        
	
        #********************************************************************************
        #
        #
        #
        #
        #       HERE YOU CAN ADD MORE VARIABLES, WHICH YOU CAN USE TO STORE THE PREVIOUS ERRORS,
        #                                   INTEGRAL OF ERRORS, ETC.
        #
        #
        #
        #
        #
        #*********************************************************************************

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
        #self.cross_track_distance += np.abs(( np.cos(self.initial_yaw) * (self.initial_y-self.y) - np.sin(self.initial_yaw) * (self.initial_x - self.x)))**2 * dt

        # calculate the integral of the velocity above the max velocity
        #self.velocity_above_max += np.maximum(np.sqrt(self.surge**2 + self.sway**2) - self.max_velocity, 0)**2 * dt

        #self.time_prev = current_time
        

        




    def mission_status_subscription_callback(self, msg):
        """
        Checks whether the mission is active or not.
        """
        
        if self.is_active:
            if msg.mission_mode != glassy_msgs.MissionInfo.SUMMER_CHALLENGE:
                self.timer_control_.cancel()
                self.Fe = False


                get_projection_on_line = np.dot([self.x - self.initial_x, self.y - self.initial_y], [np.cos(self.initial_yaw), np.sin(self.initial_yaw)])

		
                self.get_logger().info('Mission ended')
                #self.get_logger().info('ALONG TRACK DISTANCE (larger is better): ' + str(get_projection_on_line))
                #self.get_logger().info('CROSS TRACK DISTANCE SQUARED INTEGRAL (lower is better): ' + str(self.cross_track_distance))
                #self.get_logger().info('VELOCITY OVER MAX SQUARED INTEGRAL (lower is better): ' + str(self.velocity_above_max))
                #self.get_logger().info('ALONG TRACK DISTANCE SCORE: ' + str(get_projection_on_line * self.total_dist_coef))
                #self.get_logger().info('CROSS TRACK DISTANCE INTEGRAL SCORE: ' + str(- self.cross_dist_coef * self.cross_track_distance))
                #self.get_logger().info('VELOCITY OVER MAX INTEGRAL SCORE: ' + str(- self.vel_coef * self.velocity_above_max))
                #self.get_logger().info('TOTAL SCORE: ' + str(get_projection_on_line * self.total_dist_coef - self.cross_dist_coef * self.cross_track_distance - self.vel_coef * self.velocity_above_max))

        else:
            if msg.mission_mode == glassy_msgs.MissionInfo.SUMMER_CHALLENGE:
                self.timer_control_.reset()
                self.is_active = True

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
        


    def myChallengeController(self):
        """
        Implement the controller for the challenge here.
        (it will run at 30Hz)
        """
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
        
        e_yaw = self.initial_yaw - self.yaw
        e_yaw = np.arctan2(np.sin(e_yaw), np.cos(e_yaw))  # normalizar para [-pi, pi]
        e_om = -self.yaw_rate  # erro de yaw rate (referência = 0)    
        e_dp = 0.0  # se não estiveres a usar deriva longitudinal    
        e_dv = 0.0  # idem para velocidade lateral


        current_time = self.get_clock().now().nanoseconds/1e9
        dt = (current_time - self.time_prev)

        self.define_states(dt)

        #********************************************************************************
        #
        #
        #
        #
        #                            YOUR CALCULATIONS GO HERE
        #                                   GOOD LUCK!
        #
        #
        #
        #
        #
        #*********************************************************************************


        # After finishing your calculations, fill the following variables with the values you want to publish, and thats it, you are done.

        # Fill these values in please (motor should be between [0,1]) (max thrust is reduced, to avoid accidents)
        #n_norm = (-self.kp_n * e_np - self.kpi_n * ie_np  - self.kV_n * e_Va - self.kVi_n * ie_Va)

        #motor_value = np.clip(n_norm, 0.0, 1.0)
        n_norm = (-self.kp_n * self.e_np - self.kpi_n * self.ie_np - self.kV_n * self.e_Va - self.kVi_n * self.ie_Va)
        motor_value = np.clip(n_norm, 0.0, 1.0)
        
        self.get_logger().info(
        f"n_norm = -({self.kp_n} * {self.e_np:.3f}) "
        f"- ({self.kpi_n} * {self.ie_np:.3f}) "
        f"- ({self.kV_n} * {self.e_Va:.3f}) "
        f"- ({self.kVi_n} * {self.ie_Va:.3f}) = {n_norm:.3f}"
        f"motor_value= {motor_value:.3f}"
        )

        
        
        
        # Fill (rudder should be between [-1,1])
        
        delta_norm = (-self.kyaw_delta * e_yaw-self.kom_delta * e_om-self.kdp_delta * e_dp-self.kdv_delta * e_dv)
        
        rudder_value= np.clip(delta_norm * self.delta_max, -1.0, 1.0)
        
        
	

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


    def define_states(self,dt):
        # Estado atual
        self.v= np.array([self.surge, self.sway])
        self.p = np.array([self.x, self.y])
        self.psi = self.yaw
        
        # Direção desejada — linha reta no yaw inicial
        self.psi_d = self.initial_yaw
        self.v_d = np.array([1.0, 0.0])  # seguir para frente (direção surge)
        self.p_d = np.array([self.initial_x, self.initial_y])
        
        self.J = np.array([  [np.cos(self.psi), -np.sin(self.psi)],  [np.sin(self.psi),  np.cos(self.psi)]])
        self.J2d = self.J[0:2, 0:2] 
        
        self.J_d = np.array([   [np.cos(self.psi_d), -np.sin(self.psi_d)],   [np.sin(self.psi_d),  np.cos(self.psi_d)]])
        self.Jd2d = self.J_d[0:2, 0:2]

        
        
        
        self.e_p=np.dot(self.Jd2d.T, self.p - self.p_d)
        
        self.v_norm = np.linalg.norm(self.v) + 1e-6  # evitar divisão por zero
#        self.e_np = max(np.dot(self.e_p.T, self.v) / self.v_norm, 0)

        if np.linalg.norm(self.v) > 0.05:  # só acumular erro projetado se o barco está a andar
            self.e_np = max(np.dot(self.e_p.T, self.v) / (np.linalg.norm(self.v) + 1e-6), 0)
        else:
            self.e_np = 0.0


        
        self.ie_np += self.e_np * dt
        #self.ie_np = np.clip(self.ie_np, -10.0, 10.0)


        self.e_dp_aux = self.e_p / np.linalg.norm(self.e_p + 1e-6)
        self.e_dp = self.e_dp_aux[1]
        
        self.e_V = np.dot(self.Jd2d.T, np.dot(self.J2d, self.v - self.v_d))
        self.e_Va = self.e_V[0]

        # Acumular integral (precisas inicializar self.ie_Va antes no __init__)
        self.ie_Va += self.e_Va * dt
        #self.ie_Va = np.clip(self.ie_Va, -10.0, 10.0)

	#dump variaveis csv
	
	
        
    

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
