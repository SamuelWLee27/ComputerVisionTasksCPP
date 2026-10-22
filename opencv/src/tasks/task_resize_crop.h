#pragma once

#include "task.h"

class TaskResizeCrop : public Task{

  public:

    TaskResizeCrop(std::string &path):Task(path){};

    ~TaskResizeCrop() = default;

    void TryTask();

};