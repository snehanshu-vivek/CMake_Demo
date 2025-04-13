cmake_minimum_required(VERSION 3.2)
project(simplecalculator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
src/main.cpp
calculator/src/calculator.cpp
)

add_subdirectory(maths)

include_directories(calculator/include)

add_executable(simplecalculator ${SOURCES})

target_link_libraries(simplecalculator maths)
