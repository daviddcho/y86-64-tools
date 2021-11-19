#!/bin/bash
(cd misc/ && make clean)
(cd misc/ && make)
./misc/yas shifts.ys
./misc/yis shifts.yo
gcc shifts.c && ./a.out

#./misc/yas test.ys
#./misc/yis test.yo
#gcc test.c && ./a.out
#./misc/yas test_ovf.ys
#./misc/yis test_ovf.yo

