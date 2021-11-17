#include <stdio.h> 
#define size 10

int main() {
  int A[size] = {0, 4, -3, 0, 4, -1, 2, 0, 1, 5};
  int X = 2, S = 0, i;
  for (i = 0; i < size; i++) {
    if (A[i] < 0) 
      //S += X << (-A[i]); 
      S += -A[i] << X;
    else 
      //S += X >> A[i];
      S += A[i] >> X;
  }
  printf("A:");
  for (i = 0; i < size; i++) 
    printf(" %d,", A[i]);
  printf("\nX: %d, S: %d\n", X, S);
}
