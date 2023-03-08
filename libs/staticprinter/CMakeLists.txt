cmake_minimum_required(VERSION 3.21)
project(staticprinter C CXX)

message(STATUS "*** Setting up: staticprinter")

set(PRINTER_SOURCES 
    include/printer.h
    printer.cpp
)

# Telling cmake that this will be compiled into a static library
add_library(staticprinter STATIC 
    ${PRINTER_SOURCES}
)

# Force this project to be to c++17 
target_compile_features(staticprinter PRIVATE cxx_std_17)

# Include the header directory so it can be referenced easily in the sources
target_include_directories(staticprinter 
    PUBLIC include/
)

# make an alias for this library
add_library(MainProject::staticprinter ALIAS staticprinter)