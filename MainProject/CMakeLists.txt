cmake_minimum_required(VERSION 3.21)

message(STATUS "*** Setting up: MainProject")

# Get the config.h.in file and ubstiture the file to Versions.h with correct settings set in set_platform()
configure_file(${MAIN_APP_SRC_DIR}/configure/config.h.in ${MAIN_APP_SRC_DIR}/config.h @ONLY)

# Telling cmake that this will be compiled into a static library
add_executable(MainProjectApp 
    config.h
    main.cpp
)

target_link_libraries(MainProjectApp
    PUBLIC MainProject::dynadder
    PUBLIC MainProject::staticprinter
    PRIVATE MainProject::headeronly
)

# Force this project to be to c++17 
target_compile_features(MainProjectApp PRIVATE cxx_std_17)
