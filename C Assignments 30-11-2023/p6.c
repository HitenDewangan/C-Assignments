//PersonA deposits 5000 every month in LIC, As a return the LIC returns 8.5% benefit for every year.
//He has applied the above benefit form of procedure for 5 years
//What are his final returns after 5 years on LIC deducing 12% of His total benefit.
//—--------------------------------------------------------------------------------
//Write a Program to evaluate above problem using Function.

#include <stdio.h>

float calculateTotalReturn(int monthlyDeposit, float interestRate, int years) {
  int totalDeposit = monthlyDeposit * 12 * years;
  float interestEarned = totalDeposit * (interestRate / 100);
  float totalReturn = totalDeposit + interestEarned;
  return totalReturn;
}

float calculateFinalReturn(float totalReturn, float taxPercentage) {
  float taxAmount = totalReturn * (taxPercentage / 100);
  float finalReturn = totalReturn - taxAmount;
  return finalReturn;
}

int main() {
  int monthlyDeposit = 5000;
  float interestRate = 8.5;
  int years = 5;
  float taxPercentage = 12;

  float totalReturn = calculateTotalReturn(monthlyDeposit, interestRate, years);
  float finalReturn = calculateFinalReturn(totalReturn, taxPercentage);

  printf("Total return after 5 years: %.2f\n", totalReturn);
  printf("Final return after deducting 12% tax: %.2f\n", finalReturn);

  return 0;
}

      


