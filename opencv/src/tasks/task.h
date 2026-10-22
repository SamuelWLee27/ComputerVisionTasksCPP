#pragma once

#include <filesystem>

namespace fs = std::filesystem;

class Task {

  public:

    Task(std::string &path):m_path(path){};
    Task(){};

    virtual void TryTask() = 0;

  protected:
    fs::path m_path;
};