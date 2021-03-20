cmake_minimum_required(VERSION 3.17)
project(Class_Relationships)

set(CMAKE_CXX_STANDARD 14)

add_executable(Class_Relationships main.cpp Book.h Book.cpp GreatGatsby.cpp GreatGatsby.h Author.cpp Author.h ReadingSpeed.cpp ReadingSpeed.h testing.cpp)
