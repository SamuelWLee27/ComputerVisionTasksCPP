#include "task_warp.h"
#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <filesystem>

namespace fs = std::filesystem;

/*
    warp image
*/
void TaskWarp::TryTask(){
    std::cout << "Starting image task" << std::endl;

    const float w = 500, h = 500;

    cv::Mat img = cv::imread(m_path);
    cv::Mat matrix, imgWarp;

    cv::imshow("Test Image", img);
    cv::waitKey(0);

    cv::Point2f src[4] = {{486, 367}, {764, 188}, {842, 538}, {1111, 330}};
    cv::Point2f dst[4] = {{0.0f, 0.0f}, {w, 0.0f}, {0.0f, h}, {w, h}};

    matrix = cv::getPerspectiveTransform(src, dst);
    cv::warpPerspective(img, imgWarp, matrix, cv::Point(w, h));

    cv::imshow("Warped Image", imgWarp);
    cv::waitKey(0);
};
