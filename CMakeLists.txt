cmake_minimum_required(VERSION 3.6)
project(ooc_book)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/02/Class.h src/02/new.h src/02/new.c src/02/String.h src/02/main.c src/02/Atom.c)
add_executable(ooc_book ${SOURCE_FILES})