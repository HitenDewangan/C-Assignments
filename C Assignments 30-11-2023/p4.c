#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

float factorialSeriesSum(int n) {
  float sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += (float)factorial(i) / i;
  }
  return sum;
}

int main() {
  int n;

  printf("Enter the number of terms in the series: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("Invalid input. Please enter a positive integer.\n");
    return 1;
  }

  float seriesSum = factorialSeriesSum(n);
  printf("The sum of the factorial series is: %.2f\n", seriesSum);

  return 0;
}
