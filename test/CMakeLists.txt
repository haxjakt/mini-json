cmake_minimum_required(VERSION 3.24)
project("mini-json-test")

find_package(GTest REQUIRED)

add_executable(json-tests TestingMain.cpp
        JsonTokenTests.cpp)
target_include_directories(json-tests PUBLIC
        ../include)
target_link_libraries(json-tests mini_json)
target_link_libraries(json-tests ${GTEST_LIBRARIES})

# CTest
enable_testing()
add_test(JsonTokenTests json-test)

