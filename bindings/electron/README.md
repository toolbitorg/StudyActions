# Toolbit library for electron
[![NPM version](https://badge.fury.io/js/toolbit-lib.svg)](https://badge.fury.io/js/toolbit-lib)

The target device of this library is **Toolbit DMM**, Digital Multi Meter, that is used with PC to measure DC voltage or current.

# Installation

Toolbit-lib package is published to the npm registry. Please install it as follows as:

### Ubuntu linux
```shell
  sudo apt install libudev-dev
  npm install toolbit-lib
```

### macOS
```shell
  npm install toolbit-lib
```

### Windows
```shell
  npm install toolbit-lib
```

### Raspberry Pi
```shell
  sudo apt install libudev-dev
  npm install toolbit-lib
```


# Build

The following software is required to build toolbit-lib:
  * node-gyp
  * swig: http://www.swig.org/  

```shell
  cd bindings/electron
  make
```
Library for electron will be created and copied to toolbit-lib/lib folder

# Reference
