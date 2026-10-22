#include "task_video.h"
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <filesystem>

namespace fs = std::filesystem;

/*
    importing video
*/
void TaskVideo::TryTask(){
    std::cout << "Starting video task" << std::endl;

    cv::VideoCapture cap(m_path);
    cv::Mat frame;

    while(cap.read(frame)){
        cv::imshow("Test Video", frame);
        cv::waitKey(20);
    }

};