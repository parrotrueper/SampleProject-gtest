#!/bin/bash

mkdir -p build

pushd build
ninja clean
cmake -GNinja ..
ninja
popd

