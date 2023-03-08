cmake_minimum_required(VERSION 3.21)

project(dynadder C CXX)

message(STATUS "*** Setting up: dynadder")

set(PRINTER_SOURCES 
    dynadder.cpp
)

# Telling cmake that this will be compiled into a static library
add_library(dynadder SHARED 
    dynadder.cpp
)

# Force this project to be to c++17 
target_compile_features(dynadder PRIVATE cxx_std_17)

# Include the header directory so it can be referenced easily in the sources
target_include_directories(dynadder 
    PUBLIC include/
)

# make an alias for this library
add_library(MainProject::dynadder ALIAS dynadder)