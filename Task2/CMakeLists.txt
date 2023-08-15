cmake_minimum_required(VERSION 3.1.0)
project(Task1 VERSION 0.1.0)

set (CMAKE_CXX_STANDARD 17)

add_subdirectory(Catch2 Catch2-build)
add_executable(test-main test-main.cpp List.h)
target_link_libraries(test-main PRIVATE Catch2::Catch2WithMain)