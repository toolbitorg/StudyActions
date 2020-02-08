# Toolbit library for Python

The target device of this library is **Toolbit DMM**, Digital Multi Meter, that is used with PC to measure DC voltage or current.

<br>

# Installation

toolbit-lib package is published to the PyPI repository. Please install it as follows as:

### Ubuntu linux
```shell
  sudo apt install libudev-dev
  pip3 install toolbit-lib
```

### macOS
```shell
  pip3 install toolbit-lib
```

### Windows
```shell
  pip3 install toolbit-lib
```

### Raspberry Pi
```shell
  sudo apt install libudev-dev
  pip3 install toolbit-lib
```

<br>

# Usage

For example, to read voltage and current values from DMM, just make an object of Dmm

Dmm class defined by tbi.so and use member functions as follows as:

```python
from toolbit import Dmm

dmm = Dmm()
dmm.open()
print(str('%03.3f' % dmm.getVoltage()) + " [V]")
print(str('%03.3f' % (1000.0 * dmm.getCurrent())) + " [mA]")
```


require 'tbi'

dmm = Tbi::Dmm.new

puts sprintf("%.3f [V]", dmm.getVoltage())
puts sprintf("%.3f [mA]", 1000.0 * dmm.getCurrent())
```


<br>

# Build

The following software is required to build toolbit-lib from source code:
  * swig: http://www.swig.org/

### Ubuntu linux, macOS, Rasberry Pi
```shell
  cd bindings/python/toolbit-lib
  make
  sudo make install
```

### Windows
```shell
  cd bindings/python/toolbit-lib
  build.bat
  python setup.py install
```
