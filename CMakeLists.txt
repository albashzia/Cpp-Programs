cmake_minimum_required(VERSION 3.20)

project(CppPrograms LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Put all executables into the build/bin directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Automatically find every .cpp file
file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/basics/*.cpp"
    "${CMAKE_SOURCE_DIR}/oop/*.cpp"
    "${CMAKE_SOURCE_DIR}/stl/*.cpp"
    "${CMAKE_SOURCE_DIR}/dsa/*.cpp"
    "${CMAKE_SOURCE_DIR}/projects/*.cpp"
)

foreach(FILE ${CPP_FILES})
    get_filename_component(TARGET ${FILE} NAME_WE)
    add_executable(${TARGET} ${FILE})
endforeach()