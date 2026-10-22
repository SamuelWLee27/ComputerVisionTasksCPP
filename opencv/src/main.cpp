#include <iostream>
#include "tasks/task_image.h"
#include "tasks/task_video.h"
#include "tasks/task_webcam.h"
#include "tasks/task_basic_functions.h"
#include "tasks/task_resize_crop.h"
#include "tasks/task_warp.h"

enum class Tasks{
    IMAGE = 0,
    VIDEO = 1,
    WEBCAM = 2,
    BASIC_FUNCTIONS = 3,
    RESIZE_CROP = 4,
    WARP = 5,
};

int main() {
    uint32_t task;

    std::string question = R"(
    Enter task:
    0: Display Image
    1: Display Video
    2: Get Webcam
    3: Basic Functions
    4: Resize and Crop
    5: Warp
    )";
    
    std::cout << question << std::endl; 
    
    std::cin >> task; 

    std::string img_path = "../misc/test_image.png";
    std::string video_path = "../misc/test_video.mp4";
    std::string warp_img_path = "../misc/game_table.png";
    
    switch (static_cast<Tasks>(task)) {
    case Tasks::IMAGE:
        {
            auto task = TaskImage(img_path);
            task.TryTask();
            break;
        }
    case Tasks::VIDEO:
        {
            auto task = TaskVideo(video_path);
            task.TryTask();
            break;
        }
    case Tasks::WEBCAM:
        {
            auto task = TaskWebCam();
            task.TryTask();
            break;
        }
    case Tasks::BASIC_FUNCTIONS:
        {
            auto task = TaskBasicFunctions(img_path);
            task.TryTask();
            break;
        }
    case Tasks::RESIZE_CROP:
        {
            auto task = TaskResizeCrop(img_path);
            task.TryTask();
            break;
        }
    case Tasks::WARP:
        {
            auto task = TaskWarp(warp_img_path);
            task.TryTask();
            break;
        }
    default:
        std::cout << "Unsupported Task" << std::endl;
    }
    

    return 0;
}