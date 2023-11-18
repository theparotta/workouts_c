/*
 * Convert Decimal(base 10) to Octal(base 8) Number system
 * 
 */

#include <stdio.h>

int no_of_digits(int num) {
  /* Count no of digits in a number */
  int count = 0;
  
  while (num) {
    count++;
    num /= 10;
  }
  
  return count;
}


int main() {
  int val, i = 0;
  
  puts("Enter decimal number(base 10): ");
  scanf("%d", &val);
  
  // array to hold each octal digits and initialize all elements to -1
  int size = no_of_digits(val) + 3;
  int oct_val[size];
  
  /* initialize array with dummy elements */
  for (int i = 0; i < size; i++) oct_val[i] = -1;
  

  while (val) {
    oct_val[i++] = val % 8;
    
    val /= 8;    
  }
  
  /* printing the octal value */
  printf("Octal equivalent: ");
  for (int i = size-1; i >= 0; i--) {
    if (oct_val[i] == -1)
      continue;
    
    printf("%d", oct_val[i]);
  }
  
  printf("\n");  
  return 0;
}
