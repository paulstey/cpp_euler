cmake_minimum_required(VERSION 3.14.3 FATAL_ERROR)

project(prob4 LANGUAGES CXX)

add_library(palindrome 
    STATIC
        palindrome.h
        palindrome.cpp
)

add_executable(prob4 prob4.cpp)

target_link_libraries(prob4 palindrome)
