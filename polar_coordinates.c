/*
 * Input: (x, y)   - Cartesian Co-ordinates
 * Convert to polar co-ordinates
 */

#include <stdio.h>
#include <math.h>

int main() {
  float x, y;
  
  puts("Enter comma seperated cartesian co-ordinates (x, y): ");
  scanf("%f, %f", &x, &y);
  
  float r = sqrt(x * x + y * y);
  float angle = atan(y / x);
  
  printf("Equivalent polar Co-ordinates (r,theta): (%f, %f)\n", r, angle);
  
  return 0;  
}
 
