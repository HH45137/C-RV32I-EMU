cmake_minimum_required(VERSION 3.5)
project(emu-rv32i)

set(CMAKE_C_STANDARD 99)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(${PROJECT_SOURCE_DIR}/emu/)

file(GLOB ALL_EXAMPLES ${PROJECT_SOURCE_DIR}/examples/*/)
add_subdirectory(${ALL_EXAMPLES})
