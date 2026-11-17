cmake_minimum_required(VERSION 3.16)

project(h3a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(h3a
    main.cpp
    Chef.h
    Chef.cpp
    ItalianChef.h
    ItalianChef.cpp
)
