include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../../emu/include)

add_executable(demo_1 main.c)

target_link_libraries(demo_1 emu)