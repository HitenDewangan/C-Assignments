#include <stdio.h>

int findSecondLargest(int num1, int num2, int num3, int num4) {
  int largest = num1;
  int secondLargest = num2;

  if (num2 > largest) {
    largest = num2;
    secondLargest = num1;
  }

  if (num3 > largest) {
    largest = num3;
    secondLargest = (num3 > secondLargest) ? num3 : secondLargest;
  }

  if (num4 > largest) {
    largest = num4;
    secondLargest = (num4 > secondLargest) ? num4 : secondLargest;
  }

  return secondLargest;
}

int main() {
  int num1, num2, num3, num4;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  printf("Enter the third number: ");
  scanf("%d", &num3);

  printf("Enter the fourth number: ");
  scanf("%d", &num4);

  int secondLargestNumber = findSecondLargest(num1, num2, num3, num4);

  printf("The second largest number is: %d\n", secondLargestNumber);

  return 0;
}
