cmake_minimum_required(VERSION 3.12)
project(ClionWorkspace)

set(CMAKE_CXX_STANDARD 11)

# add_executable(ClionWorkspace first/main.cpp first/tabtenn0.h first/tabtenn0.cpp second/main.cpp second/fun.cpp third/main.cpp)

# 引入子目录
ADD_SUBDIRECTORY(first)
ADD_SUBDIRECTORY(second)
ADD_SUBDIRECTORY(third)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
