cmake_minimum_required(VERSION 2.8)

project(cv1Test)
include_directories(Classes/Headers)
file(GLOB src main.cpp Classes/CPPs/Cat.cpp Classes/CPPs/Pig.cpp Classes/CPPs/Dog.cpp)

add_executable(cv1Test ${src})