cmake_minimum_required(VERSION 3.10)
project(Sample_Codes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Werror")

add_executable(string stringTest.cpp myString.cpp)
add_executable(shape shapeTest.cpp myString.cpp)
add_executable(vector vectorTest.cpp myString.cpp)