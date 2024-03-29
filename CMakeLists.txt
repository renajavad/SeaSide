cmake_minimum_required(VERSION 3.10)
project(seaside)
add_executable(seaside main.cpp)
target_link_libraries(seaside gtest)
