# spiderman3 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(spiderman3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(SPIDERMAN3_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(spiderman3 WIN32 ${SPIDERMAN3_SOURCES})
else()
    add_executable(spiderman3 ${SPIDERMAN3_SOURCES})
endif()

rexglue_setup_target(spiderman3 GPU_PLUGINS xenos)
