/*
 * Currency Denominations Permitted:
 * INR 1, 2, 5, 10, 50, 100, 500
 * 
 */

#include <stdio.h>

int main() {
  int value;
  
  puts("Enter the amount: ");
  scanf("%d", &value);
  
  printf("500 INR Notes: %d\n", value/500);
  int rem = value % 500;
  
  printf("100 INR Notes: %d\n", rem/100);
  rem %= 100;
  
  printf("50 INR Notes: %d\n", rem/50);
  rem %= 50;
  
  printf("10 INR Notes: %d\n", rem/10);
  rem %= 10;
  
  printf("5 INR Coines: %d\n", rem/5);
  rem %= 5;

  printf("2 INR Coines: %d\n", rem/2);
  rem %= 2;
  
  printf("1 INR Coines: %d\n", rem);
  
  return 0;
}
