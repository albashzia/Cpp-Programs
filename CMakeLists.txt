cmake_minimum_required(VERSION 3.20)

project(CppPrograms)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS "*.cpp")

foreach(FILE ${CPP_FILES})
    get_filename_component(NAME ${FILE} NAME_WE)
    add_executable(${NAME} ${FILE})
endforeach()