cmake_minimum_required(VERSION 3.16)

project(modern-cpp-cmake)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(CPM)
CPMAddPackage("gh:TheLartians/Format.cmake@1.7.3")
CPMAddPackage("gh:catchorg/Catch2@3.4.0")

if(CMAKE_SYSTEM_NAME MATCHES "Darwin")
    add_definitions(-Wno-deprecated-declarations)
endif()

add_subdirectory(src/models)
add_subdirectory(src/app)
add_subdirectory(test)

if (Catch2_FOUND)
endif()
