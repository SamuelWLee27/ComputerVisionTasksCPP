#pragma once
#include <opencv2/imgcodecs.hpp>

#include "task.h"

class TaskBasicFunctions : public Task{

  public:

    TaskBasicFunctions(std::string &path):Task(path){};

    ~TaskBasicFunctions() = default;

    void TryTask();

  private:

    void GrayScaleTask(cv::Mat &img);
    void BlurTask(cv::Mat &img);
    void CannyTask(cv::Mat &img);

};