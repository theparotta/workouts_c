#include <stdio.h>

int main() {
  int start = 0;
  
  printf("Character   Number\n");
  printf("==================\n");
  
  while (start++ < 255)
    printf("%4c\t %5d\n", start, start);
  
  return 0;
}
