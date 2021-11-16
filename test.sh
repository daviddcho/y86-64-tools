#!/bin/bash
(cd misc/ && make clean)
(cd misc/ && make)
./misc/yas shifts.ys
./misc/yis shifts.yo
