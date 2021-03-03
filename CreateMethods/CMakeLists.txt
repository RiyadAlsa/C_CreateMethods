# cmake_minimum_required(VERSION <specify CMake version here>)
project(Test2 C)

set(CMAKE_C_STANDARD 99)

add_executable(Test2 main.c chop.h)