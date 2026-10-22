cmake_minimum_required(VERSION 3.15)
project(
    OpenCV-practice
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(OpenCV REQUIRED)

add_executable(
    opencv-practice
    src/main.cpp
    src/tasks/task_image.cpp
    src/tasks/task_video.cpp
    src/tasks/task_webcam.cpp
    src/tasks/task_basic_functions.cpp
    src/tasks/task_resize_crop.cpp
    src/tasks/task_warp.cpp
)

target_link_libraries(opencv-practice PRIVATE ${OpenCV_LIBS})

target_include_directories(opencv-practice PRIVATE src)