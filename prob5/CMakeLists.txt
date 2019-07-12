cmake_minimum_required(VERSION 3.14.3 FATAL_ERROR)

set (CMAKE_CXX_FLAGS "-std=c++11")

project(prob5 LANGUAGES CXX)

add_library(factors 
    STATIC
    factors.h
    factors.cpp
)

add_executable(prob5 prob5.cpp)

target_link_libraries(prob5 factors)
