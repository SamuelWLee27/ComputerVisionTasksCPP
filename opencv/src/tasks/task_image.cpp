#include "task_image.h"
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <filesystem>

namespace fs = std::filesystem;

/*
    importing images
*/
void TaskImage::TryTask(){
    std::cout << "Starting image task" << std::endl;

    cv::Mat img = cv::imread(m_path);

    cv::imshow("Test Image", img);
    cv::waitKey(0);
};