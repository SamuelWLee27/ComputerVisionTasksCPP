#include "task_webcam.h"
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <filesystem>

namespace fs = std::filesystem;

/*
    importing video
*/
void TaskWebCam::TryTask(){
    std::cout << "Starting webcam task" << std::endl;

    cv::VideoCapture cap(0);
    cv::Mat frame;

    while(cap.read(frame)){
        cv::imshow("Test WebCam", frame);
        cv::waitKey(1);
    }

};