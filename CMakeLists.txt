cmake_minimum_required(VERSION 3.16)
project(student_info_docker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(student_app src/main.cpp)
target_include_directories(student_app PRIVATE include)
