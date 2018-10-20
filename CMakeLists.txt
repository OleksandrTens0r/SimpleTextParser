cmake_minimum_required(VERSION 3.12)
project(statistic)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(statistic
        main.cpp
        templates.cpp
        TextHandler.cpp
        TextHandler.h)
