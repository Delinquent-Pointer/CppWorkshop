cmake_minimum_required(VERSION 3.27)
project(CppWorkshop)

set(CMAKE_CXX_STANDARD 23)

include_directories(.)
include_directories(bin)
include_directories(data)
include_directories(inc)
include_directories(lib)
include_directories(src)
include_directories(tests)

add_executable(CppWorkshop
        inc/Pokemon.h
        src/_WorkshopMain.cpp
        src/Pokemon.cpp
        inc/Basics.h
        src/Basics.cpp
        src/List.cpp
        inc/List.h
        src/ArrayList.cpp
        inc/ArrayList.h
        src/Stack.cpp
        inc/Stack.h
)
