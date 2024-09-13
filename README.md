# Niji's Many Function Calculator

## About

A calculator capable of doing various operations beyond the basic five (addition, subtraction, multiplication, division, and modulus).

## Build Instructions

To build this, just compile the contents of `src/`.
For this, you'll need `libc` (comes with `base-devel`) and a C/C++ compiler of your choice.

### Installing `libc` and Compiler of Choice

For Debian/Ubuntu users wanting to build, you'll need:
```
sudo apt-get base-devel gcc clang
```
Note that you can omit either `gcc` or  `clang`, but not both.
They're just both here to cover all bases, so to speak.

For Red Hat/Fedora users wanting to build, you'll need:
```
sudo dnf install base-devel gcc clang
```

For Arch users wanting to build, you'll need:
```
sudo pacman -S base-devel gcc clang
```

For Android users that are using Termux that want to build, you'll need:
```
pkg install libc++ clang
```

For Windows users that are using MSYS2 that want to build, you'll need:
```
pacman -S base-devel gcc clang
```

### Compiling

For GCC:
```
g++ "src/main.cpp" -o YOUR_TEST_OR_INSTALL_LOCATION_HERE -Wall
```

For Clang:
```
clang++ "src/main.cpp" -o YOUR_TEST_OR_INSTALL_LOCATION_HERE
```

Replace `YOUR_TEST_OR_INSTALL_LOCATION_HERE` with path and name of your output file.

## To-do

- [ ] Documentation
- [ ] Move functions to their own file and header (hopefully).
- [ ] Add arc* operations (`acos(x)` "arccosine", `asin(x)` "arcsine", `atan(x)` "arctangent").
- [ ] Add hyperbolic operations (`cosh(x)` "hyperbolic cosine", `sinh(x)` "hyperbolic sine", `tanh(x)` "hyperbolic tangent", `acosh(x)` "hyperbolic arccosine", `asinh(x)` "hyperbolic arcsine", `atanh` "hyperbolic arctangent").
- [ ] Add logarithmic operations.
