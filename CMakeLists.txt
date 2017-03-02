cmake_minimum_required(VERSION 3.6)
project(ooc_book)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/main.c src/01/Set.h)
add_executable(ooc_book ${SOURCE_FILES})