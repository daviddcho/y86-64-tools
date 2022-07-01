#include <stdio.h>
#define PACK_CC(z,s,o) (((z)<<2)|((s)<<1)|((o)<<0))
// zero, sign, ovf

int main() {
  unsigned char b = PACK_CC(0,1,0);
  printf("%u\n", b);
}
