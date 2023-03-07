# Demystified CMake is my attempt to make sense at CMake.
# So i have created this mini project that does the following:
#
# 1. Heavily documents everything that is happeneing in the CMakeLists.txt
# 2. Configures a project called Main Project 
# 3. Has Main Project use various different ionternal and external libraries including:
# 3.1. Build and statically link an internal library along with Main Project
# 3.2. Build and dinamically link an internal library along with Main Project
# 3.3. Statically link a prebuilt external library along with Main Project
# 3.4. Link the Main Project to a prebuilt dynamic library
# 3.5. Link to header only libraries
# 4. As a post build process copy all necessary libraries along side the executable of Main Project so we can easily start debugging with F5
# 5. Include GTest in our Main Project application for demonstration.


# The following line says what our preferred CMake version is 
cmake_minimum_required(VERSION 3.21)

# Here we declare our project with a version a nice description and the supported languages to be C anc C++
project(MainProject 
    VERSION 0.0.2
    DESCRIPTION "Main Project demonstrating some good uses of CMake"
    LANGUAGES CXX C
)

# include the custom made cmake_module/helpers.cmake file. This helps declutter files with reusable stuff
# In this case we have there a macro that sets the platform by calling set_platform()
include(cmake_modules/Helpers.cmake)

# Now we will call set_platform Macro defined in cmake_modules/Helpers.cmake that basically sets some variables to use globally
set_platform()

