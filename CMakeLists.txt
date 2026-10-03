cmake_minimum_required(VERSION 3.20)

project(Lix-L VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

find_package(raylib REQUIRED)

add_executable(Lix-L
    src/main.c
)

target_link_libraries(Lix-L PRIVATE raylib)
