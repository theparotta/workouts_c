/*
 * Calculate the natural Logarithm (considering only first 7 terms)
 * TERM = (x - 1) / x
 * 
 * natural_log = TERM + 1/2 (TERM)^2 + 1/2 (TERM)^3 + 1/2 (TERM)^4 +.....
 * 
 */

#include <stdio.h>
#include <math.h>


double calculate_term(double x, int n) {
  double term = pow( ( x - 1 ) / x, n);
  
  return (1.0 / 2) * term;
}


int main() {
  double x;
  double natural_log = 0;
  
  puts("Enter the value of X: ");
  scanf("%lf", &x);
  
  for (int i = 2; i <= 7; i++)
    natural_log += calculate_term(x, i);
    
  // adding the first term
  natural_log += (x - 1) / x;
  
  printf("Natural logarithms when x is %lf: %lf\n", x, natural_log);

  return 0;
}
