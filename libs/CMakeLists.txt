# Adding the libraries which will be included in the build with MainProject

# This is a dynamic library which takes two numbers and add them. Thats it
add_subdirectory(dynadder)

# This is a static library which simply print out a message
add_subdirectory(staticprinter) 

# this is a header only library which doesnt produce any compiled lib but can be included in any target as a library
add_subdirectory(headeronly)