# Efficient Autonomous USV – Control and Energy Experiments

This repository contains the control algorithms, simulation tools, and experimental scripts developed for the Master's dissertation:

**“Efficient Autonomous Boat with Solar Energy Recharging”**  
MSc in Electrical and Computer Engineering  
NOVA School of Science and Technology – NOVA University Lisbon

The project focuses on the development and validation of a trajectory tracking controller for an **Unmanned Surface Vehicle (USV)** within a **ROS2 + PX4 + Gazebo simulation environment**, together with preliminary work on energy consumption characterization and photovoltaic energy integration.

---

# Repository Structure

```
.
├── Boat Consumption Test
│   └── Scripts and logs used to estimate propulsion power consumption of the USV platform
│
├── Control
│   └── Control algorithms and analysis scripts used in MATLAB for
│       model-in-the-loop validation and debugging
│
├── MIR-Competition-2024-main
│   └── ROS2 implementation of the controller used in the PX4/Gazebo
│       simulation stack (including the glassy_challenge node)
│
└── debug.mat
    └── MATLAB data file used for debugging and controller analysis
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
