#include <stdio.h>

typedef long long int word_t;
#define PACK_CC(z,s,o) (((z)<<2)|((s)<<1)|((o)<<0))

int main() {
  word_t x;
  word_t cval = 2;
  word_t argB = 100;
  // shift argb by cval
  printf("shift 0x%llx by 0x%llx\n", argB, cval);
  printf("****************\n");

  // logical tests
  x = (unsigned) argB >> cval;
  printf("logical right: 0x%llx, %lld\n", x, x);
  x = (unsigned) argB << cval;
  printf("logical left: 0x%llx, %lld\n", x, x);

  // arithmetic tests
  x = (signed) argB >> cval;
  printf("arithmetic right: 0x%llx, %lld\n", x, x);
  x = (signed) argB << cval;
  printf("arithmetic left: 0x%llx, %lld\n", x, x);

  //unsigned char b = PACK_CC(1,0,0);
  //printf("%u\n", b);
}


/* 
https://stackoverflow.com/questions/44694957/the-difference-between-logical-shift-right-arithmetic-shift-right-and-rotate-r
https://stackoverflow.com/questions/7622/are-the-shift-operators-arithmetic-or-logical-in-c/22734721
*/
