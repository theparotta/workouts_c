#include <stdio.h>

void circular_shift(int*, int*, int*);

int main() {
  int x = 1, y = 2, z = 3;
  
  printf("Initial values: %d, %d, %d\n", x, y, z);
  
  circular_shift(&x, &y, &z);
  printf("First shift: %d, %d, %d\n", x, y, z);
  
  circular_shift(&x, &y, &z);  
  printf("Second shift: %d, %d, %d\n", x, y, z);
  
  return(0);
}



void circular_shift(int *a, int *b, int *c) {
  int tmp;
   
  tmp = *a;
  *a = *b;
  *b = *c;
  *c = tmp;
}
