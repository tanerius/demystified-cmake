cmake_minimum_required(VERSION 3.21)
project(headeronly C CXX)

message(STATUS "*** Setting up: headeronly")

set(LIB_SOURCES 
    headeronly.h
)

# Telling cmake that this will be compiled into a static library
add_library(headeronly INTERFACE)

target_sources(headeronly PUBLIC ${LIB_SOURCES})

target_include_directories(headeronly 
    INTERFACE .
)

# make an alias for this library
add_library(MainProject::headeronly ALIAS headeronly)