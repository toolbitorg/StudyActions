Python bindings
====

## Descripton

Toolbit library for Python.


## Require

Python  

swig  
  http://www.swig.org/  


## Build


### Linux
    make
tbi.py and _tbi.so will be created and copied to samples folder


### Windows

Open command prompt  
Execute build.bat  

Note:  
    Please modify the following line according to your VC version  
    set VS90COMNTOOLS=%VS140COMNTOOLS%  


## Test

    cd ../samples
    python chopper_test.py
    python dmm_test.py


## Reference
