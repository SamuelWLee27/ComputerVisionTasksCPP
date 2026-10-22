#include "task_resize_crop.h"
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <filesystem>

/*
    resize and crop
*/
void TaskResizeCrop::TryTask(){
    std::cout << "Starting resize and crop task" << std::endl;

    cv::Mat img = cv::imread(m_path);
    cv::Mat imgResize;
    cv::Mat imgCrop;

    cv::imshow("Normal Image", img);
    std::cout << img.size() << std::endl;
    cv::waitKey(0);

    cv::resize(img, imgResize, cv::Size(), 0.5, 0.5);
    cv::imshow("Resized Image", imgResize);
    std::cout << imgResize.size() << std::endl;
    cv::waitKey(0);

    cv::Rect roi(100, 100, 300, 250);

    imgCrop = imgResize(roi);
    cv::imshow("Cropped Image", imgCrop);
    std::cout << imgCrop.size() << std::endl;
    cv::waitKey(0);
};