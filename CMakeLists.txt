cmake_minimum_required(VERSION 3.27)
project(CppWorkshop)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(bin)
include_directories(data)
include_directories(inc)
include_directories(lib)
include_directories(src)
include_directories(tests)

add_executable(CppWorkshop
        inc/Pokemon.h
        src/main.cpp
        src/Pokemon.cpp
        inc/Basics.h
        src/Basics.cpp
)
