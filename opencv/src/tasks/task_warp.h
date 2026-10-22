#pragma once

#include "task.h"

class TaskWarp : public Task{

  public:

    TaskWarp(std::string &path):Task(path){};

    ~TaskWarp() = default;

    void TryTask();

};