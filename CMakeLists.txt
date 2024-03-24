project(DataStructures)
cmake_minimum_required(VERSION 3.10)
set(CXX_STANDARD_REQUIRED 17)

add_library(array INTERFACE)
target_include_directories(array INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(main src/main.cpp)