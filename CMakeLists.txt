cmake_minimum_required(VERSION 3.6)
project(ooc_book)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES src/01/main.c src/01/Set.h src/01/new.h src/01/Object.h src/01/Set.c src/01/Bag.c src/02/Class.h src/02/new.h src/02/new.c src/02/String.h src/02/main.c)
add_executable(ooc_book ${SOURCE_FILES})