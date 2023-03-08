cmake_minimum_required(VERSION 3.21)

message(STATUS "*** Setting up: MainProject")

# Telling cmake that this will be compiled into a static library
add_executable(MainProjectApp 
    config.h
    main.cpp
)

target_link_libraries(MainProjectApp
    PUBLIC MainProject::dynadder
    PUBLIC MainProject::staticprinter
)

# Force this project to be to c++17 
target_compile_features(MainProjectApp PRIVATE cxx_std_17)
