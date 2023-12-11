/*
 * I - 1, V - 5, X - 10, L - 50, C - 100, D - 500, M - 1000
 */

#include <stdio.h>

int main() {
  const int POSITIONS[] = {1000, 500, 100, 50, 10, 5, 1};
  const char ROMAN[] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
  
  int num;
  
  puts("Enter a positive integer: ");
  scanf("%d", &num);
  
  for (int i = 0; i < sizeof(ROMAN)/sizeof(ROMAN[0]); i++) {
    int place_holder = num / POSITIONS[i];
    
    for (int j = place_holder; j > 0; j--)
      printf("%c", ROMAN[i]);
    
    // updating the num value with the remainder
    num %= POSITIONS[i];
  }
  
  printf("\n");
  return(0);
}
