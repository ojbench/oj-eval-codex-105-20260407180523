cmake_minimum_required(VERSION 3.10)
project(problem_105)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(code code.cpp)
# Place the binary in project root as required by OJ
set_target_properties(code PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")
