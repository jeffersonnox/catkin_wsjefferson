#include<ros/ros.h>
#include<turtlesim/Spawn.h>

int main(int argc, char **argv){
        ros::init(argc,argv,"spawn_turtle");
        ros::NodeHandle nh;

        ros::ServiceClient spawnClient
        =nh.serviceClient<turtlesim::Spawn>("spawn");

        turtlesim::Spawn::Request req;
        turtlesim::Spawn::Response resp;

        req.x=2;
        req.y=4;
        req.theta=M_PI/2;
        req.name="leo";

        bool sucess=spawnClient.call(req,resp);

        if(sucess){
            ROS_INFO_STREAM("Spawned a turtle named"
            << resp.name);
        } else {
            ROS_INFO_STREAM("Failed to spawn.");
        
        }

}
