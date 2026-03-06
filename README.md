Efficient Autonomous USV – Control and Energy Experiments

This repository contains the control algorithms, simulation tools, and experimental scripts developed for the Master's dissertation:

“Efficient Autonomous Boat with Solar Energy Recharging”
MSc in Electrical and Computer Engineering
NOVA School of Science and Technology – NOVA University Lisbon

The project focuses on the development and validation of a trajectory tracking controller for an Unmanned Surface Vehicle (USV) within a ROS2 + PX4 + Gazebo simulation environment, together with preliminary work on energy consumption characterization and photovoltaic energy integration.


Repository Structure
.
├── Boat Consumption Test
│   └── Scripts and logs used to estimate propulsion power consumption
│       of the USV platform.
│
├── Target-Blast
│   └── Control algorithms and analysis scripts used in MATLAB
│       for model-in-the-loop validation and debugging.
│
├── MIR-Competition-2024-main
│   └── ROS2 implementation of the controller used in the PX4/Gazebo
│       simulation stack (including the glassy_challenge node).
│
