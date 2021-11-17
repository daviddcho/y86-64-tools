#include <stdio.h>

typedef long long int word_t;

int main() {
  word_t x;
  word_t cval = 100;
  word_t argB = 5;
  // shift argb by cval
  x = (signed) argB >> cval;
  printf("%lld\n", x);
}
