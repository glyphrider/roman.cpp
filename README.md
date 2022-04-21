# Roman Numerals

[![Travis-CI Build Status](https://travis-ci.com/glyphrider/roman.cpp.svg?branch=master)](https://travis-ci.com/glyphrider/roman.cpp)

## Building the New Way (cmake)

```sh
mkdir -pv build
cmake -B build
cmake --build build
ctest --test-dir build
```

You can build with different (non-default) compilers by prefixing the first cmake line to set some environment variables, e.g. `env CC=clang CXX=clang cmake -B build`. These environment variables will not be required in the build step, as they are encoded into the generated files.
