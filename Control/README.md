# Control Experiments

This directory contains the logs and analysis scripts related to the **closed-loop controller tests performed in Gazebo**.

## Files

- `debug.mat`, `debug (1).mat`, ..., `debug (11).mat`  
  Logged data from different simulation runs of the controller.

- `debug_s1.mat`  
  Log data corresponding to the **S1 scenario (straight-line trajectory)**.

- `debug_s2.mat`  
  Log data corresponding to the **S2 scenario (circular trajectory)**.

- `debugger.m`  
  Main MATLAB script used to **load the debug `.mat` files and generate plots**.

  This script allows visualization of:
  - control commands (thrust and rudder),
  - tracking errors,
  - vehicle trajectories.

## Usage

To visualize the results, run in MATLAB/OCTAVE(may have some small changes depending on what program is used):

```matlab
debugger
```

The script loads the available `debug*.mat` files and generates the plots used for controller performance analysis.
