cmake_minimum_required(VERSION 3.12)
project(C_modules C)

set(CMAKE_C_STANDARD 99)

add_executable(C_modules main.c common/common_api.c common/common_api.h test/test_common_api.c)