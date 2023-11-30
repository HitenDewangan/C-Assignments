//Person A has planned for stock market trading 
//He has invested (10000 on TCS with score benefit of 6%) every month
//and invested (5000 on Infosys with score benefit of 5%) every month
//What is his Benefit after end of one year in terms of Money he has invested.

//Write a C Program using Function

#include <stdio.h>

float calculateTotalBenefit(int monthlyInvestment, float interestRate, int years) {
  int totalInvestment = monthlyInvestment * 12 * years;
  float interestEarned = totalInvestment * (interestRate / 100);
  float totalBenefit = totalInvestment + interestEarned;
  return totalBenefit;
}

int main() {
  float tcsMonthlyInvestment = 10000;
  float tcsInterestRate = 6;
  int tcsYears = 1;

  float tcsTotalBenefit = calculateTotalBenefit(tcsMonthlyInvestment, tcsInterestRate, tcsYears);

  float infosysMonthlyInvestment = 5000;
  float infosysInterestRate = 5;
  int infosysYears = 1;

  float infosysTotalBenefit = calculateTotalBenefit(infosysMonthlyInvestment, infosysInterestRate, infosysYears);

  float totalBenefit = tcsTotalBenefit + infosysTotalBenefit;

  printf("Total benefit after one year: %.2f\n", totalBenefit);

  return 0;
}





