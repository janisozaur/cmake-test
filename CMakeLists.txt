cmake_minimum_required(VERSION 3.10)

project(MyProject C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(lib)
add_executable(my_program main.c)
target_link_libraries(my_program mylibrary)
