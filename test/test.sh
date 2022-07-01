#!/bin/bash
(cd ../misc/ && make clean)
(cd ../misc/ && make)
printf "\n**** BEGIN SHIFTS TEST ****\n"
../misc/yas shifts.ys
../misc/yis shifts.yo
gcc shifts.c && ./a.out

#printf "\n**** BEGIN SINGLE OP TEST ****\n"
#../misc/yas test_op.ys
#../misc/yis test_op.yo
#gcc test.c && ./a.out
#printf "\n**** BEGIN OVF TEST ****\n"
#../misc/yas test_ovf.ys
#../misc/yis test_ovf.yo
