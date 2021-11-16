#!/bin/env bash

# todo: put build into a variable (e.g. CMAKE_GENERATOR)

rm -rfv ${BUILD_DIRECTORY:="build"}
mkdir -pv ${BUILD_DIRECTORY}

cmake -G ${CMAKE_GENERATOR:-"Unix Makefiles"} -B${BUILD_DIRECTORY}
cmake --build ${BUILD_DIRECTORY}

${BUILD_DIRECTORY}/roman_tests
