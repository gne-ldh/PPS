cmake_minimum_required(VERSION 2.4)

project(Week02)

set(CMAKE_VERBOSE_MAKEFILE ON)

#Bring the headers, such as Student.h into the project

include_directories(include)
 
# file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.c")
 
add_executable(main ${SOURCES})
