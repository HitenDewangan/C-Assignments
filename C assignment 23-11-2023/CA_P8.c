#include <stdio.h>                         //Problem8   Friend A Organised a surprise party for Friend B 

int main() {
 	int budget = 2000;
  	int items[6] = {100, 200, 300, 350, 400, 450};
  	int numItems = 6;
 	int totalCost = 0;
 	int i, j;
 	int item = 0;
	
	printf("Choose Items(1,2,3,4,5) MAX 6");
	printf("\nenter 0 for end\n");
	
	printf("Prices are item 1 = 100, item 2 = 200, item 3 = 300");
	printf("           item 4 = 350, item 5 = 400, item 6 = 450");
	printf("");
	for (i = 0; i < numItems; i++) {
		printf("\nWhich items you want to buy: ");
		scanf("%d", &item);
	//	printf("%d",isdigit(items[item-1]));
		
		totalCost += items[item-1];   //(item +1) for 0+1=1
		if (item = 0){
			break;
		}
	}
	
	if (totalCost > budget){
		printf("\nUnsafe!!! Crossed the budget");
		printf("\nTotal cost = %d",totalCost);
		printf("\nExtra money to afford: %d", totalCost-budget);
	}
	else{
		printf("\nSafe :D ... Total cost is: %d", totalCost);
	}

  return 0;
}
