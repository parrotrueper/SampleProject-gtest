# SampleProject-gtest
 
# Use a Docker container to build and test

## Install test dependencies
 
 ```
 git clone https://github.com/google/googletest.git
 ```
 

 ## Build the docker image

 ```
 docker build -t gtest .
 ```

 ## Invoke the container

 ```
 ./drun.sh
 ```

## Then from the container
### building when you change the sources

 ```
 ./do-build.sh
 ```

 ### building when you change the unit tests
 
 ```
 ./do-rebuild.sh
 ```
 
 ### clean

 ```
 ./do-clean.sh
 ```
 
 ### executing the tests

 ```
 ./do-tests.sh
 ``` 

 ### executing the binary

 ```
 cd build
 ./SampleProject
 ```

# Code

## Sources

src/

```
hello-world.c
```

## Unit tests

test/

```
hello-world-test.cpp
```

 

# If you really must, without Docker

 ## Install build dependencies
 
 ```
 sudo apt install libglib2.0-dev
 sudo snap install --classic cmake
 sudo apt install ninja-build
 mkdir build
 ```

 
 ## Install test dependencies
 
 ```
 git clone https://github.com/google/googletest.git
 ```
 
 
 ## building

 ```
 cd build
 cmake -GNinja ..
 ninja
 ```
 
 ## executing the binary

 ```
 cd build
 ./SampleProject
 ```
 
 ## clean

 ```
 cd build
 ninja clean
 ```
 
 ## executing the tests

 ```
 cd build/test
 ./unit_tests
 ``` 

 
