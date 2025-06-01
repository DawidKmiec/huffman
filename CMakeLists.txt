cmake_minimum_required(VERSION 3.28.3)
project(huffman)

include_directories(include)
add_executable(${PROJECT_NAME} main.c file_reading.c)
