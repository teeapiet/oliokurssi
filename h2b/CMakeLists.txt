cmake_minimum_required(VERSION 3.16)

project(h2b LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(h2b
    main.cpp
    Car.h
    Car.cpp
)
