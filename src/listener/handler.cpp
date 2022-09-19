/**
 * This module separates the callback handling
 * functions from the service init/setup/config
 * code. It hooks into functions.cpp to execute
 * functionality.
 *
 * This is like definitely too much separation
 * for this example but like if you have a
 * big codebase it could be useful
 *
 * @author Vincent Wang <wang5528@purdue.edu>
 */

/* Include standard message types */
#include "ros/ros.h"
#include "std_msgs/String.h"

/* Include functions.h */
#include "listener/functions.h"

/* Include own header file for definitions */
#include "listener/handler.h"

void chatterCallback(const std_msgs::String::ConstPtr& msg)
{
    printChatter(msg->data.c_str());
}
