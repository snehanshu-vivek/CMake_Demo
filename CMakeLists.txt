cmake_minimum_required(VERSION 3.2)
project(simplecalculator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
src/main.cpp
calculator/src/calculator.cpp
)

include_directories(calculator/include)

add_executable(simplecalculator ${SOURCES})