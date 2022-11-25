# skeleton CMAKE Ninja Googletest with Docker.

This is a skeleton project for CMAKE, Ninja and Googletest using a Docker container
to provide the toolchain.

This repository is only for the project.
The Docker container for the toolchain is here: 
https://github.com/parrotrueper/googletest-container

## Dependencies

Build the Docker container *gtest* find it here:

https://github.com/parrotrueper/googletest-container

clone this somewhere in your system and build the container

## Clone where your sources live

Then wherever you want your project to live, clone this repo

Inside your project tree clone the googletest repo

```
git clone https://github.com/google/googletest.git
```
## Bash history

Add in a file so that bash history can be used in the Docker container.

```
touch .bash_history
```

Your tree should look like this:

```
project
├── googletest
├── include
│   ├── dev_debug.h
│   ├── hello-world.h
│   └── hello-world.hpp
├── src
│   ├── hello-world.c
│   └── hello-world.cpp
├── test
│   ├── CMakeLists.txt
│   └── sample-test.cpp
├── .bash_history
├── clean-this.sh
├── CMakeLists.txt
├── do-build-src.sh
├── main.cpp
├── README.md
├── rebuild.sh
├── run-container.sh
└── run-unit-tests.sh
```

## Build

Invoke the container

```
./run-container.sh
```

Within the container

```
./do-build-src.sh
```

## Test

Within the continer

```
./run-unit-tests.sh
```

