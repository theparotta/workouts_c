/*
 * Convert RGB color to CMYK color scheme
 * 
 * Cyan-Magenta-Yellow-Black format
 * values vary form 0 to 1
 */

#include <stdio.h>

int main() {
  int red, green, blue, max;
  float cyan, magenta, yellow, black, white;
  
  puts("Enter Red, Green, Blue colour: ");
  scanf("%d %d %d", &red, &green, &blue);
  
  // finding the max(red, green, blue)  
  max = (red > green) ? (red > blue ? red : blue) : (green > blue ? green : blue);

  white = max / 255.0;
  
  cyan = ( white - (red / 255.0) ) / white;
  magenta = ( white - (green / 255.0) ) / white;
  yellow = ( white - (blue / 255.0) ) / white;
  black = 1 - white;
  
  printf("C: %.2f, M: %.2f, Y: %.2f, B: %.2f\n", cyan, magenta, yellow, black);  
  return 0;  
}
