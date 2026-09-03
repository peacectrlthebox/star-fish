# star-fish

A beginner-level C++ intro — one heavily-commented file covering `int`
variables, arithmetic, and reading input.

## Build & run

The simplest way, with any C++ compiler installed (clang++ or g++):

```bash
clang++ -std=c++17 -Wall src/main.cpp -o basics
./basics
```

A `CMakeLists.txt` is also included if you'd rather use CMake:

```bash
cmake -S . -B build
cmake --build build
./build/basics
```
