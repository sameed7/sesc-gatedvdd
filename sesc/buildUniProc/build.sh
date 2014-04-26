#!/bin/bash

make clean
make
make wattchify
make cactify
./wattchify sesc.conf temp.conf
./cactify temp.conf power.conf
./sesc.mem -cpower.conf ../tests/crafty < ../tests/tt.in
