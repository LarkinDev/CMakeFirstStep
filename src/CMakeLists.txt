cmake_minimum_required(VERSION 3.10)

project(cv1)
include_directories(Classes/Headers)
file(GLOB src main.cpp Classes/CPPs/Cat.cpp Classes/CPPs/Pig.cpp Classes/CPPs/Dog.cpp)

add_executable(cv1 ${src})