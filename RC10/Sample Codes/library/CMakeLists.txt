cmake_minimum_required(VERSION 3.10)
project(library)

set(CMAKE_CXX_STANDARD 14)

add_executable(library main.cpp book.cpp library.cpp)