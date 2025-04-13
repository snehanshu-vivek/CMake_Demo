cmake_minimum_required(VERSION 3.2)
project(maths)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
src/maths.cpp
)

add_library(maths STATIC ${SOURCES})

target_include_directories(maths PUBLIC include)