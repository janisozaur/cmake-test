cmake_minimum_required(VERSION 3.10)

project(MyLibrary VERSION 1.0)

# Set C compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -pedantic")

# Create the library
add_library(mylibrary STATIC
    src/mylibrary.c
)

# Set include directories
target_include_directories(mylibrary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Install the library
install(TARGETS mylibrary
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

# Install header files
install(DIRECTORY include/
    DESTINATION include
)
