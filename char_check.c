/*
 * Ideentify the character groups.
 * A - Z   --> 65 - 90
 * a - z   --> 97 - 122
 * 0 - 9   --> 48 - 57
 * for special symbols --> 0 - 47, 58 - 64, 91 - 96, 123 - 127
 */ 

#include <stdio.h>

int main() {
  char symbol;
  
  while ( (symbol = getchar()) != '\n') {  
    if (symbol >= 65 && symbol <= 90)
      printf ("'%c' - Capital Letter\n", symbol);

    else if (symbol >= 97 && symbol <= 122)
      printf ("'%c' - Small Letter\n", symbol);
  
    else if (symbol >=  48 && symbol <= 57)
      printf("'%c' - Digit\n", symbol);
  
    else if (symbol <= 47 || (symbol >= 58 && symbol <= 64) )
      printf("'%c' - Special Symbol\n", symbol);

    else if( (symbol >= 91 && symbol <= 96) || (symbol >= 123 && symbol <= 127) )
      printf("'%c' - Special Symbol\n", symbol);

    else
      printf("INVALID CHARACTER\n");
  }
  
  return 0;
} 
