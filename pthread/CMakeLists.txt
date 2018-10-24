cmake_minimum_required(VERSION 3.12)
project(pthread)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS -pthread)

add_executable(pthread main.cpp)
