/*
 * PYTHAGOREAN TRIPLE
 * ===================
 *  - is calculated using Euclid's formula
 * 
 * pick a arbitary pair of integers such that m > n > 0
 * then the formula to identify triple, states that
 *   a = m^2 - n^2
 *   b = 2mn
 *   c = m^2 + n^2
 * 
 * Caclulate all the triples, such that the length is less than or equal to 30
 */
 
#include <stdio.h>
#include <math.h>


int main() {
  int m = 2, n = 1;
  int a = 0, b = 0, c = 0;
  
  puts("Pythagorean triples(with length less than 30): ");
  for (int m = 2; m < 30 ; m++) {
    for (int n = 1; n < m; n++) {
      a = pow(m, 2) - pow(n, 2);
      b = 2 * m * n;
      c = pow(m, 2) + pow(n, 2);
      
      if (a > 30 || b > 30 || c > 30)
        break;
      
      printf("(%d, %d, %d)\n", a, b, c);
    }
  }
  return 0;
}
