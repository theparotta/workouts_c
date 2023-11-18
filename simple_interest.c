/*
 * Interest - cost of borrowing money
 * 
 * principal - total amount borrowed
 * interest rate - percent amount paid by borrower to lender
 * tenure - total agreed days to pay
 */
 
#include <stdio.h>
 
int main() {
  float principal, interest_rate, simple_interest;
  int tenure;
  
  puts("Enter comma seperated principal amount, interest_rate & tenure(years): ");
  scanf("%f, %f, %d", &principal, &interest_rate, &tenure);
  
  simple_interest = principal * interest_rate * tenure;
  printf("Simple Interest: %0.2f INR\n", simple_interest);
  
  return 0;
}

