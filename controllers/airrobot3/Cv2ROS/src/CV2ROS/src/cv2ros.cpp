#include <ros/ros.h>
#include <std_msgs/String.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <unistd.h>
#include <stdio.h>
#include <signal.h>
#include <sstream>
volatile sig_atomic_t flag = 0;
void setflag(int sig){
  flag = 1;
}
class Cv2ROS
{
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  //image_transport::Subscriber image_sub_;

public:
  sensor_msgs::ImagePtr msg;
  std_msgs::String smsg;
  image_transport::Publisher image_pub_;
  ros::Publisher cam_param;

  Cv2ROS() : it_(nh_){
    image_pub_ = it_.advertise("/cv_cam/image_raw",1);
    ros::NodeHandle n;
    cam_param = n.advertise<std_msgs::String>("/cv_cam/camera_info",1);
    std::stringstream ss;
    ss << "header:"<< std::endl;
    ss << "  seq: 0"<< std::endl;
    ss << "  stamp:"<< std::endl;
    ss << "    secs: 0"<< std::endl;
    ss << "    nsecs: 0"<< std::endl;
    ss << "  frame_id: cv_cam"<< std::endl;
    ss << "height: 480"<< std::endl;
    ss << "width: 640"<< std::endl;
    ss << "distortion_model: plumb_bob"<< std::endl;
    ss << "D: [0.0, 0.0, 0.0, 0.0, 0.0]"<< std::endl;
    ss << "K: [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]"<< std::endl;
    ss << "R: [1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 1.0]"<< std::endl;
    ss << "P: [1, 0.0, 0.0, 0.0, 0.0, 1, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0]"<< std::endl;
    ss << "binning_x: 0"<< std::endl;
    ss << "binning_y: 0"<< std::endl;
    ss << "roi:"<< std::endl;
    ss << "  x_offset: 0"<< std::endl;
    ss << "  y_offset: 0"<< std::endl;
    ss << "  height: 0"<< std::endl;
    ss << "  width: 0"<< std::endl;
    ss << "  do_rectify: False"<< std::endl;

  smsg.data = ss.str();
  ROS_INFO("%s",smsg.data.c_str());
    //cv::namedWindow(OPENCV_WINDOW);
    }

  void sendpic(cv::Mat img){
    //sprintf(file,"imgs/img.jpg");


    //std::cout << file <<std::endl;
    //std::cout << &bridge.image<<std::endl;
    //std::cout << "hi" <<std::endl;


    msg = cv_bridge::CvImage(std_msgs::Header(), "bgr8", img).toImageMsg();
    //std::cout << bridge.image <<std::endl;
    //cv::imshow(OPENCV_WINDOW,bridge.image);
    //cv::waitKey(0);
    image_pub_.publish(msg);
    cam_param.publish(smsg);
    //cv::cvReleaseImage(img);
    img.release();
    //free(img);

    //std::cout << bridge.image.u->refcount <<std::endl;

  }
};

  int main(int argc, char** argv){
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL){
      std::cout << cwd <<std::endl;
    }
    ros::init(argc,argv,"cv2ros");
    Cv2ROS reader;
    ros::Rate loop_rate(10);
    char file[30];
    signal(SIGINT,setflag);
    int i = 0;
    unsigned int imgcount = 0;
    while(!flag){
      //delete img;
      //std::cout << &img.data <<std::endl;
      if(reader.image_pub_.getNumSubscribers() > 0){
        sprintf(file,"imgs/drone%d.jpg",imgcount);
        imgcount = imgcount <= 5794?imgcount+1:0;
        std::cout << file <<std::endl;
        cv::Mat img = cv::imread(file,1);
        if (img.rows == 0){
          imgcount = 0;
          continue;
        }
        reader.sendpic(img);
      }

      loop_rate.sleep();
      //free(img.data);
      //i++;
    }
    return 0;
  }
