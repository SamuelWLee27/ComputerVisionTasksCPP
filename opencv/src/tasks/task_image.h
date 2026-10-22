#pragma once

#include "task.h"

class TaskImage : public Task{

  public:

    TaskImage(std::string &path):Task(path){};

    ~TaskImage() = default;

    void TryTask();

};