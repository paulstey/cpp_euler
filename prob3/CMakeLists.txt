cmake_minimum_required(VERSION 3.14.3 FATAL_ERROR)

project(prob3 LANGUAGES CXX)

add_library(primes 
    STATIC
        primes.h
        primes.cpp
)

add_executable(prob3 prob3.cpp)

target_link_libraries(prob3 primes)
