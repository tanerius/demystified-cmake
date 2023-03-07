# demystified-cmake
Demystified CMake is my attempt to make sense at CMake.
So i have created this mini project that does the following:  

 1. Heavily documents everything that is happeneing in the CMakeLists.txt
 2. Configures a project called Main Project
 3. Has Main Project use various different ionternal and external libraries including:  
   3.1. Build and statically link an internal library along with Main Project  
   3.2. Build and dinamically link an internal library along with Main Project  
   3.3. Statically link a prebuilt external library along with Main Project  
   3.4. Link the Main Project to a prebuilt dynamic library  
   3.5. Link to header only libraries  
 4. As a post build process copy all necessary libraries along side the executable of Main Project so we can easily start debugging with F5
 5. Include GTest in our Main Project application for demonstration.
 6. Above all each and every CMakeLists.txt file will be maticulously documented.
