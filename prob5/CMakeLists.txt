cmake_minimum_required(VERSION 3.14.3 FATAL_ERROR)

project(prob5 LANGUAGES CXX)

add_library(is_divisible 
    STATIC
    is_divisible.h
    is_divisible.cpp
)

add_executable(prob5 prob5.cpp)

target_link_libraries(prob5 is_divisible)
