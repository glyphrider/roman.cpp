#!/bin/env bash

pushd $(dirname $0)

rm -rf build
mkdir build
cd build
cmake ..
make
ctest

popd
