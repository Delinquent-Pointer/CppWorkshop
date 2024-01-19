cmake_minimum_required(VERSION 3.27)
project(CppWorkshop)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)
include_directories(bin)
include_directories(data)
include_directories(inc)
include_directories(lib)
include_directories(src)
include_directories(test)

add_executable(CppWorkshop
        inc/Pokemon.h
        src/_WorkshopMain.cpp
        inc/Basics.h
        src/Basics.cpp
        inc/List.h
        inc/ArrayList.h
        inc/Stack.h
        inc/Graphics.h
)
