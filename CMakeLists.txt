cmake_minimum_required(VERSION 3.0.0)
project(MyfirstCmake VERSION 0.1.0 LANGUAGES C CXX)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(MyfirstCmake main.cpp)

include(CTest)
enable_testing()

