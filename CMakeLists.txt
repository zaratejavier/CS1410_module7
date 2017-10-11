cmake_minimum_required(VERSION 3.8)
project(module7)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES unary.cpp)
set(SOURCE_FILES assignment.cpp)
#set(SOURCE_FILES binaryOperator.cpp)

add_executable(module7 ${SOURCE_FILES})