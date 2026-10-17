cmake_minimum_required(VERSION 3.17)
project(Robot_Movement LANGUAGES CXX)

#Standard requirement
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#define executable file
add_executable(my_program main.cpp
                          src/Movement.cpp)

#Specify which Specific Folder will be included
target_include_directories(my_program PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
