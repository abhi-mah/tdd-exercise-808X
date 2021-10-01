/**
 * Copyright 2020 <Advait Patole> <Sameep Pote>
**/

/**
 * @file: PID.cpp
 * @brief: Contains the class declarations of PID_Controller
 * @author: Part 1 : Sameep Pote (driver), Advait Patole (navigator)
 **/

#ifndef _HOME_SAMEEP_DESKTOP_EMPN808X_TDD_P_TDD_INCLUDE_PID_H_
#define _HOME_SAMEEP_DESKTOP_EMPN808X_TDD_P_TDD_INCLUDE_PID_H_

/**
 * @brief class PID_controller
 *
 */
class PID_controller{
 private:
  double kp = 0.8, ki = 0.1, kd = 0.3, dt = 1;
 public:
  double output = 0, i_error = 0, p_error = 0, d_error = 0;
  /**
   * @brief function to calculate error
   *
   * @param set_point
   * @param current_velocity
   * @return piderror
   */
  double get_error(double set_point, double current_velocity);

  /**
   * @brief Use getError output to generate error each step and compute controller output
   *
   * @param current_velocity
   * @param error
   * @return output of controller
   */
  double compute(double current_velocity, double error);
};

#endif  // _HOME_SAMEEP_DESKTOP_EMPN808X_TDD_P_TDD_INCLUDE_PID_H_

