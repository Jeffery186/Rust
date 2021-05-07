# cmake_minimum_required(VERSION <specify CMake version here>)
project(Rust C)

set(CMAKE_C_STANDARD 11)

add_executable(Rust
        c/hello_world.c)
