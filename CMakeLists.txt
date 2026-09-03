# CMake is the tool that turns your .cpp files into a runnable program.
# This file tells it what to build and how.

cmake_minimum_required(VERSION 3.16)   # oldest CMake version this file supports
project(star_fish_basics CXX)          # name of the project; CXX = "this is C++"

set(CMAKE_CXX_STANDARD 17)             # use the C++17 language standard
set(CMAKE_CXX_STANDARD_REQUIRED ON)    # fail loudly instead of silently downgrading

# Build one executable named "basics" out of this source file.
add_executable(basics
    src/main.cpp
)
