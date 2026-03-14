# MODELING AND CONTROL OF AN AUTONOMOUS SURFACE VESSEL WITH SOLAR ENERGY RECHARGING

This repository contains the control algorithms, simulation tools, and experimental scripts developed for the Master's dissertation:

**“MODELING AND CONTROL OF AN AUTONOMOUS SURFACE VESSEL WITH SOLAR ENERGY RECHARGING”**  
MSc in Electrical and Computer Engineering  
NOVA School of Science and Technology – NOVA University Lisbon

The project focuses on the development and validation of a trajectory tracking controller for an **Unmanned Surface Vehicle (USV)** within a **ROS2 + PX4 + Gazebo simulation environment**, together with preliminary work on energy consumption characterization and photovoltaic energy integration.

---

# Repository Structure

```
.
├── Boat Consumption Test
│   └── Experimental logs and scripts used to estimate propulsion
│       power consumption of the USV platform.
│
├── Control
│   └── Gazebo closed-loop controller experiments and validation tests.
│
├── MIR-Competition-2024-main
│   └── ROS2 implementation of the USV controller used with the
│       PX4 + Gazebo simulation stack (includes the glassy_challenge node).
│
├── target-blast
│   └── MATLAB simulations and experiments used for controller validation (Model-in-the-Loop tests).
```

---

# Project Overview

The project develops and validates a **trajectory tracking controller** for an autonomous surface vessel. The validation is performed through two complementary stages:

- **MATLAB Model-in-the-Loop (MiL) simulations**
- **ROS2 + PX4 + Gazebo closed-loop simulations**

The controller generates propulsion and steering commands based on the vehicle state and reference trajectory.

Two canonical scenarios are evaluated:

- **Straight-line trajectory tracking**
- **Circular trajectory tracking**

---

# Technologies Used

- MATLAB / Simulink
- Python
- ROS2
- PX4 Autopilot
- Gazebo
- QGroundControl

---

# Author

**Diogo Miguel Costa do Nascimento**  
MSc in Electrical and Computer Engineering  
NOVA School of Science and Technology – NOVA University Lisbon
