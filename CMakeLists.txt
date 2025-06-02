cmake_minimum_required(VERSION 3.28.3)
project(huffman)

add_executable(${PROJECT_NAME} main.c)

add_library (
    src
    src/treemerger.c
    src/stringcounter.c
)

target_include_directories(src PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC src)