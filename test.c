#include <stdio.h>

typedef long long int word_t;

int main() {
  word_t x;
  word_t cval = 2;
  word_t argB = 23;
  // shift argb by cval
  //x = (signed) argB >> cval;
  //x = (unsigned) argB >> cval;
  //x = (signed) argB << cval;
  x = (unsigned) argB << cval;

  printf("%lld\n", x);
}
