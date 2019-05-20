# Roman Numerals

[![Build Status](https://travis-ci.org/glyphrider/roman.cpp.svg?branch=master)](https://travis-ci.org/glyphrider/roman.cpp)

## Before Building

If you didn't do a recursive clone of the repo, you'll want to be sure to grab the googletest submodule.

```sh
git submodule init
git submodule update
```

## Building the New Way (cmake)

```sh
mkdir build
cd build
cmake ..
make
ctest
```

## Building the old way (static Makefile)

There is still a static make file that works with `g++` or, with some coaxing, `clang++`.

In general....

```sh
make
```

If you want it to work with clang++ (I used version 3.8 and 6.0)

```sh
CXX=clang++ CXXFLAGS=-std=c++11 make
```

If you don't want to use the submodule googletest, for whatever reason, you can override its location like this

```sh
GOOGLETEST=../googletest/googletest make
```
