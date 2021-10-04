/**
 * Copyright 2021 <Advait Patole> <Sameep Pote>
 **/

/**
 * @file: PID.cpp
 * @brief: Contains the class definition of PID_Controller
 * @author: Part 1 : Sameep Pote (driver), Advait Patole (navigator)
 * @author: Part 2 : Abhijit Mahalle (driver), Gaurav Raut(navigator)
 **/

#include <pid.h>
#include <iostream>

double PID_controller::get_error(double set_point, double current_velocity) {
  return (set_point - current_velocity);
}

double PID_controller::compute(double current_velocity, double error) {
  i_error += error * dt;
  d_error = (error - p_error) / dt;
  output = (kp * error) + (ki * i_error) + (kd * d_error);
  current_velocity += output;
  p_error = error;
  return current_velocity;
}
