# Roman Numerals

## Building

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

