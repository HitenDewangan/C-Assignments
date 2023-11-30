//The mathematical function is as in below
//f(x)=10x+10
//Write a Program which evaluates above function equation given using Function

#include <stdio.h>

float evaluateFunction(float x) {
  return 10 * x + 10;
}

int main() {
  float x;

  printf("Enter a value for x: ");
  scanf("%f", &x);

  float result = evaluateFunction(x);
  printf("f(%.2f) = %.2f\n", x, result);

  return 0;
}





