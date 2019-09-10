cmake_minimum_required(VERSION 2.4)

project(Week02)

set(CMAKE_VERBOSE_MAKEFILE ON)

#Bring the headers, such as Student.h into the project

include_directories(RaiH)
 
# file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "RaiSource/*.c")
 
add_executable(cir ${SOURCES})
