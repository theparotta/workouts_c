#include <stdio.h>

int main() {
  char ch;
  FILE *fptr;
  
  // opening a file
  fptr = fopen("currency.c", "r");
  if (fptr == NULL)
    puts("Error in opening file.");
  
  do {
    ch = fgetc(fptr);
    printf("%c", ch);
  } while (ch != EOF);

  
  fclose(fptr);
  
  return 0;
}
