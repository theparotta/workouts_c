#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int get_rand(int, int);


int main() {
  // seeding the random number generation
  srand(time(NULL));
  
  
  printf("get_rand(0,1): %d\n", get_rand(0,1));
  printf("get_rand(0,3): %d\n", get_rand(0,3));
  
  
  return 0;
}



int get_rand(int low, int high) {
  return (rand() % (high - low + 1) );
}
