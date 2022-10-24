cmake_minimum_required(VERSION 3.23)
project(CPPLabs)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SOURCES
        Headers/*.h
        )

add_executable(CPPLabs main.cpp)
