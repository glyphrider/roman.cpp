#!/bin/env bash

pushd $(dirname $0)

rm -rf build
mkdir build
cd build
cmake -G ${CMAKE_GENERATOR:-"Unix Makefiles"} ..
cmake --build .
ctest

popd
