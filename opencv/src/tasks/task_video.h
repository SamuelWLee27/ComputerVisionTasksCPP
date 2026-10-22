#pragma once

#include "task.h"

class TaskVideo : public Task{

  public:

    TaskVideo(std::string &path):Task(path){};

    ~TaskVideo() = default;

    void TryTask();

};