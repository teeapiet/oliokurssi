cmake_minimum_required(VERSION 3.16)

project(h2a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(h2a
    main.cpp
    Car.h
    Car.cpp
    Rectangle.h
    Rectangle.cpp
    Student.h
    Student.cpp
)
