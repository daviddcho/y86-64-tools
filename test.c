#include <stdio.h>

typedef long long int word_t;
#define PACK_CC(z,s,o) (((z)<<2)|((s)<<1)|((o)<<0))

int main() {
  word_t x;
  word_t cval = 2;
  word_t argB = 10;
  // shift argb by cval
  //printf("shift %lld by %lld\n", argB, cval);
  printf("shift 0x%llx by 0x%llx\n", argB, cval);
  printf("****************\n");

  // logical tests
  x = (signed) argB >> cval;
  printf("logical right: 0x%llx\n", x);
  x = (signed) argB << cval;
  printf("logical left: 0x%llx\n", x);

  // arithmetic tests
  x = (unsigned) argB >> cval;
  printf("arithmetic right: 0x%llx\n", x);
  x = (unsigned) argB << cval;
  printf("arithmetic left: 0x%llx\n", x);

  //unsigned char b = PACK_CC(1,0,0);
  //printf("%u\n", b);
}
