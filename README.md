# skeleton CMAKE project with googletest

## Dependencies

Docker container gtest built

https://github.com/parrotrueper/googletest-container

clone this somewhere in your system and build the container


Then wherever you want your project to live, clone this repo

Inside your project tree clone the googletest repo

```
git clone https://github.com/google/googletest.git
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
