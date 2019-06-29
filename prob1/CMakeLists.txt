cmake_minimum_required(VERSION 3.14.3 FATAL_ERROR)

project(prob1 LANGUAGES CXX)

add_library(utils 
    STATIC
        utils.h
        utils.cpp
)

add_executable(prob1 proj_euler1.cpp)

target_link_libraries(prob1 utils)
