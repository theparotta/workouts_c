#include <stdio.h>

struct Egg {
  int dia;
  int rad;
};

int main() {
  // declaring a struct object
  struct Egg egg1;
  
  // so the variable holds an address  
  printf("%p \n", egg1);
  
  // an array of struct Egg
  struct Egg eggs[3];
  
  eggs[0].dia =30;
  eggs[0].rad = 50;  
  
  printf("eggs : %p \n", eggs);
  printf("eggs[0] : %d \n", eggs[0]);
  printf("eggs[1] : %p \n", eggs[1]);
  printf("eggs[2] : %p \n", eggs[2]);
  
  
  
  
  return 0;
}
