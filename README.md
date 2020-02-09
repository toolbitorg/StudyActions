# ToolbitSDK

ToolbitSDK is Software Develepment Kit for measurement and automation system. Target device is a multimeter named as **Toolbit DMM** for now. Please see the following project page: https://hackaday.io/project/10398-luke-open-framework-multimeterlogger


It is cross platform SDK


Source code is described by C/C++ but libraries for the following languages have been released by using SWIG:
  * **C++**
  * [**Python 3.5 or later**](bindings/python/toolbit-lib/README.md)
  * [**javascript specially for electron**](bindings/electron/README.md)


# description
  * Electron for cross-platform desktop apps
  * Easy install by packager
    * [![PyPI version](https://badge.fury.io/py/toolbit-lib.svg)](https://badge.fury.io/py/toolbit-lib)
    * [![NPM version](https://badge.fury.io/js/toolbit-lib.svg)](https://badge.fury.io/js/toolbit-lib)
  * Object Oriented Programming
  ```python
  from toolbit import Dmm

  dmm = Dmm()
  dmm.open()
  print(dmm.getVoltage())
  ```



# Build

Download the latest source from [GitHub repository](https://github.com/toolbitorg/ToolbitSDK).

The following command/software is required to build toolbit-lib:
  * make
    * For Windows, MinGW is highly recommended
  * swig: http://www.swig.org/
  * Ubuntu linux / Raspberry Pi
    * libudev-dev


# Reference
  * http://www.signal11.us/oss/hidapi/

# License

[GPLv2] Please refer to the LICENSE file in this repository
