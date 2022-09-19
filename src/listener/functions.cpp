/**
 * This file contains the functions with
 * the core logic. It is separated from
 * the communications layer except for
 * logging.
 *
 * @author Vincent Wang <wang5528@purdue.edu>
 */
#include "ros/ros.h"

void printChatter(const char* msgStr)
{
    ROS_INFO("I heard: [%s]", msgStr);
}
