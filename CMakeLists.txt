cmake_minimum_required(VERSION 3.24)
project(mini_json)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(source)
add_subdirectory(test)

add_library(mini_json source/library.cpp source/test.cpp)
target_include_directories(mini_json PUBLIC
        include)
