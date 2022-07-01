#include <stdio.h> 
#define size 10

int main() {
  int A[size] = {0, 4, -3, 0, 4, -1, 2, 0, 1, 5};
  int X = 2, S = 0, i;
  int val;
  for (i = 0; i < size; i++) {
    if (A[i] < 0) {
      val = -A[i] << X;
      S += val;
      //printf("shift %d by %d = %d\n", -A[i], X, val);
    } else { 
      val = A[i] >> X;
      S += val;
      //printf("shift %d by %d = %d\n", A[i], X, val);
    }
  }
  printf("A:");
  for (i = 0; i < size; i++) 
    printf(" %d,", A[i]);
  printf("\nX: %d, S: %d\n", X, S);
}
