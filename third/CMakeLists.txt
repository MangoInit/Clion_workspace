cmake_minimum_required(VERSION 3.12)
project(third)

set(CMAKE_CXX_STANDARD 11)

add_executable(third main.cpp)

#set(key value) 用法
set(SOURCE_FILES main.cpp)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
