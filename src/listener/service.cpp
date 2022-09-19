/** listener.cpp
 *
 * This ROS node will listen to chatter on the "chatter"
 * topic and print out the result.
 *
 * Worth noting that while a similar paradigm can
 * be used for ROS2, class/object based workflows
 * (subclassing rclcpp::Node) is much more common.
 *
 *
 * @author Vincent Wang <wang5528@purdue.edu>
 */

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "listener/handler.h"

int main(int argc, char **argv)
{
    // Initialize ROS node "listener"
    // Logs etc. will be tagged with this name
    ros::init(argc, argv, "listener");

    // Get a reference to the node
    ros::NodeHandle node;

    // Subscribe to a topic. Any messages sent by publishers
    // on topic will be picked up and handled by
    // the chatterCallback function.
    ros::Subscriber chatterSub = node.subscribe(
            "chatter", 1000, chatterCallback);

    // Spin the node infinitely so that callbacks will
    // be handled. You could also use a while loop with
    // spinOnce
    ros::spin();

    return 0;
}
