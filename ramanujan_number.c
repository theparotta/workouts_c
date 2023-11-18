/*
 * Find all Hardy-Ramanujan Number.
 * - Hardy-Ramanujan number is a natural number such that it can be expressed
 *   as sum of two cubes in two different ways
 * 
 * EX:
 * 1798 = 
 *     1^3 + 12^3   // way 01
 *     9^3 + 10^3   // way 02
 */
 
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

_Bool is_present(int hr_num[], int size, int val) {
  for (int i = 0; i < size; i++) {
    if (val == hr_num[i])
      return true;
  }
  return false;
}


int main() {
  int limit;
  
  puts("Enter a limiting value to search for Hardy-Ramanujan number: ");
  scanf("%d", &limit);
  
  int ha_ram[limit];
  int position = 0;
  
  for (int i = 1; i < limit; i++) {
    for (int j = 1; j < limit; j++) {
      for (int k = 1; k < limit; k++) {
        for (int l = 1; l < limit; l++) {
          // Make sure i, k, j, l are not equal to one another
          if (i == j || i == k || i == l || j == k || j == l || k == l)
            continue;
            
          int u = pow(i, 3) + pow(j, 3);
          int v = pow(k, 3) + pow(l, 3);
          
          if (u == v) {
            // to avoid duplicate to be printed
            if (is_present(ha_ram, limit, u))
              continue;
            
            printf("Number: %d, cubic pairs: (%d, %d), (%d, %d)\n", u, i, j, k, l);
            ha_ram[position++] = u;
          }
        }
      }
    }
  }
  
  return 0;
}
