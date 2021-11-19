#include <stdio.h>
#include <limits.h>
#include <math.h>

typedef long long int word_t;
#define PACK_CC(z,s,o) (((z)<<2)|((s)<<1)|((o)<<0))

int main() {
  word_t x;
  word_t cval = 1;
  word_t argb = 20;
  //word_t argb = ULLONG_MAX-1;
  //word_t argb = -1;
  printf("argb 0x%llx, 0x%llx\n", (unsigned long long) argb, (signed long long) argb); 
  // shift argb by cval
  printf("shift 0x%llx by 0x%llx\n", argb, cval);
  printf("****************\n");

  // logical tests
  x = (unsigned long long) argb >> cval;
  //x = argb >> cval;
  printf("logical right: 0x%llx, %lld\n", x, x);
  unsigned long long ux = (unsigned long long) argb << cval;
  //x = argb << cval;
  printf("logical left: 0x%llx, %lld\n", ux, ux);
  printf("%lu bytes\n", sizeof(ux));

  // arithmetic tests
  //x = (signed long long) argb >> cval;
  x = argb >> cval;
  printf("arithmetic right: 0x%llx, %lld\n", x, x);
  //x = (signed long long) argb << cval;
  x = argb << cval;
  printf("arithmetic left: 0x%llx, %lld\n", x, x);

  //unsigned char b = PACK_CC(1,0,0);
  //printf("%u\n", b);
}

/* 
https://stackoverflow.com/questions/44694957/the-difference-between-logical-shift-right-arithmetic-shift-right-and-rotate-r
https://stackoverflow.com/questions/7622/are-the-shift-operators-arithmetic-or-logical-in-c/22734721

arithmetic left shift has overflow problem bc 
u can push out the signed bit and change the sign 
logical shift is unsigned so no problem

try cval=1, argb=LLONG_MAX
*/
