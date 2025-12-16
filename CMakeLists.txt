cmake_minimum_required(VERSION 3.14)

# 1. Name your project
project(RaylibGame)

# 2. Set C++ Standard (Raylib usually works best with 17 or newer)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 3. Find the Raylib package installed on your machine
find_package(raylib REQUIRED)

# 4. Create the executable from your source file(s)
add_executable(Game src/main.cpp)

# 5. Link Raylib to your executable
target_link_libraries(Game PRIVATE raylib)
