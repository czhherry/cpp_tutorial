cmake_minimum_required(VERSION 3.5)
project(timing_in_cpp VERSION 1.0.0)

add_executable(timing main.cpp)

target_link_libraries(timing pthread)