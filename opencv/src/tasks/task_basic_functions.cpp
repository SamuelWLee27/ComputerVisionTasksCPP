#include "task_basic_functions.h"

#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <filesystem>

namespace fs = std::filesystem;

void TaskBasicFunctions::TryTask(){

    std::cout << "Starting basic functions task" << std::endl;

    cv::Mat img = cv::imread(m_path);

    GrayScaleTask(img);

    BlurTask(img);

    CannyTask(img);
}

void TaskBasicFunctions::GrayScaleTask(cv::Mat &img){
    
    cv::Mat imgGray;

    cv::cvtColor(img, imgGray, cv::COLOR_BGR2GRAY);

    cv::imshow("Grey Scale Image", imgGray);

    cv::waitKey(0);
}

void TaskBasicFunctions::BlurTask(cv::Mat &img){
    cv::Mat imgBlur;
    cv::GaussianBlur(img, imgBlur, cv::Size(7,7), 5, 0);

    cv::imshow("Blurred image", imgBlur);

    cv::waitKey(0);
}

void TaskBasicFunctions::CannyTask(cv::Mat &img){
    cv::Mat imgCanny, imgDilate, imgErode;
    cv::Canny(img, imgCanny, 50, 150);

    cv::imshow("Canny image", imgCanny);
    cv::waitKey(0);

    cv::Mat kernal = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3,3));

    cv::dilate(imgCanny, imgDilate, kernal);

    cv::imshow("Canny dilated image", imgDilate);
    cv::waitKey(0);

    cv::erode(imgDilate, imgErode, kernal);

    cv::imshow("Canny eroded image", imgErode);
    cv::waitKey(0);
}

