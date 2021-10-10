# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(task1 LANGUAGES CXX)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

set(SOURCE_FILES
        # Headers
        train.h
        ship.h
        shape.h
        plain.h

        # Sources
        main.cpp
        plain.cpp train.cpp ship.cpp shape.cpp container.cpp container.h)

add_executable(Procedure ${SOURCE_FILES})
