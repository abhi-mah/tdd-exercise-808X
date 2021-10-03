/**
 * Copyright 2021 <Advait Patole> <Sameep Pote>
**/


/**
 * @file: PID.cpp
 * @brief: Contains the class definition of PID_Controller
 * @author: Part 1 : Sameep Pote (driver), Advait Patole (navigator)
 **/

#include <gtest/gtest.h>
#include <pid.h>
#include<iostream>

PID_controller con;

/**
 * @brief    the function tests if the function compute_test works right
 * @param    pid_compute_test is test name
 * @param    should_pass shows what function passes test case
 * @return   none
 */
TEST(pid_compute_test, should_pass) {
ASSERT_DOUBLE_EQ(13.6, con.compute(4.0, 8.0));
}

/**
 * @brief    the function tests if the function get_error behaves right
 * @param    pid_get_error is test name
 * @param    should_pass shows what function passes test case
 * @return   none
 */
TEST(pid_get_error1, should_pass) {
ASSERT_DOUBLE_EQ(1, con.get_error(5.0, 4.0));
}


/**
 * @brief    the function tests if the function get_error behaves right
 * @param    pid_get_error is test name
 * @param    should_pass shows what function passes test case
 * @return   none
 */
TEST(pid_get_error2, should_pass) {
ASSERT_DOUBLE_EQ(6, con.get_error(10.0, 4.0));
}


/**
 * @brief    the function tests if the function get_error behaves right
 * @param    pid_get_error is test name
 * @param    should_pass shows what function passes test case
 * @return   none
 */
TEST(pid_get_error3, should_pass) {
ASSERT_DOUBLE_EQ(-5, con.get_error(5.0, 10.0));
}


/**
 * @brief    the function tests if the function get_error behaves right
 * @param    pid_get_error is test name
 * @param    should_pass shows what function passes test case
 * @return   none
 */
TEST(pid_get_error4, should_pass) {
ASSERT_DOUBLE_EQ(0, con.get_error(5.0, 5.0));
}



