#include <stdio.h>

int main() {
  int num = 0, rnum = 0;
  int position = 10;
  
  puts ("Enter a whole number to reverse: ");
  scanf("%d", &num);
  
  while (num) {
    int digit = num % 10;
    rnum  = rnum * position + digit;
    
    num /= 10;
  }
  
  printf("Reversed number: %d\n", rnum);
  
  return 0;
}
