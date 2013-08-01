#!/bin/bash

DIR="$( cd "$( dirname "$0" )" && pwd )"

rm -r $DIR/build
mkdir $DIR/build
cd $DIR/build
cmake ..
make

