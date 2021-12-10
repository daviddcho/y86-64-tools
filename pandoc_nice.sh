#!/bin/bash 
pandoc WRITEUP.md \
  --include-in-header listings-setup.tex \
  -V geometry:margin=1in \
  --listings \
  -o WRITEUP.pdf \
