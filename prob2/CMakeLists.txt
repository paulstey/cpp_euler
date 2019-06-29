cmake_minimum_required(VERSION 3.14.3 FATAL_ERROR)

project(prob1 LANGUAGES CXX)

add_library(utils 
    STATIC
        utils.h
        utils.cpp
)

add_executable(prob2 prob2.cpp)

target_link_libraries(prob2 utils)
