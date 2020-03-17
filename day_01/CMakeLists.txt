cmake_minimum_required(VERSION 3.10)
project(day_01 C)

set(CMAKE_C_STANDARD 99)

add_executable(day_01 main.c variable/test.c variable/test_constant.c variable/test_constant.h)