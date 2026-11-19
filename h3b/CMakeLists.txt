cmake_minimum_required(VERSION 3.16)

project(h3b LANGUAGES CXX)

# make_unique tarvitsee vähintään C++14-standardin.
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(h3b
    main.cpp
    Animal.h
    Animal.cpp
    Dog.h
    Dog.cpp
)
