/*
 * A0 - 1189 mm X 841 mm
 * A1 - 841 mm X 594 mm
 */
 
#include <stdio.h>

#define A0L 1189
#define A0W 841

int main() {
  puts("PAPER DIMENTIONS FROM A0 to A8");
  
  printf("Paper A%d dimensions: %d mm X %d mm\n", 0, A0W, A0L);
  int ol_w = A0W;
  int ol_l = A0L;
  
  for (int i=1; i <= 8; i++) {
    int nw_w = ol_l / 2;
    int nw_l = ol_w;
    
    printf("Paper A%d dimensions: %d mm X %d mm\n", i, nw_w, nw_l);
    
    /* updating values */
    ol_w = nw_w;
    ol_l = nw_l;
  }
  
  return 0;
}
