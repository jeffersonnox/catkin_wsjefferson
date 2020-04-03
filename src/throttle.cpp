#include <ros/ros.h>

int main(int argc,char **argv){

    ros::init(argc, argv, "log_throttled");
    ros::NodeHandle nh;

    while(ros::ok()){
        ROS_DEBUG_STREAM_THROTTLE(0.1,"DURA 0.1 SEGUNDOS");
        ROS_INFO_STREAM_THROTTLE(0.3,"DURA 0.3 SEGUNDOS");
        ROS_WARN_STREAM_THROTTLE(0.5,"DURA 0.5 SEGUNDOS");
        ROS_ERROR_STREAM_THROTTLE(1.0,"DURA 1.0 SEGUNDOS");
        ROS_FATAL_STREAM_THROTTLE(15.0,"DURA 15.0 SEGUNDOS");
    }

}
