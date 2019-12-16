cmake_minimum_required(VERSION 3.5)
project(thread_in_cpp VERSION 1.0.0)

add_executable(thread main.cpp)

target_link_libraries(thread pthread)
