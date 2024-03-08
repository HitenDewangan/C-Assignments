//Problem 6
#include <stdio.h>

int main() {
  int price;
  char card;

  printf("Enter the price of the ticket: ");
  scanf("%d", &price);

  printf("Enter the alphabet of the card: ");
  scanf(" %c", &card);

  if (price == 20000 && card == 'A') {
    printf("Category: VVIP\n");
  } else if (price == 10000 && card == 'B') {
    printf("Category: VIP\n");
  } else if (price == 5000 && card == 'C') {
    printf("Category: Special County\n");
  } else if (price == 2000 && card == 'D') {
    printf("Category: General County\n");
  } else {
    printf("Invalid price or card type.\n");
  }

  return 0;
}
