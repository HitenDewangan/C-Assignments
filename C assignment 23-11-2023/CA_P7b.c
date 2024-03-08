//Problem 7   sum of   11+21+31+...n

//Code #2
#include <stdio.h>

int main() {
  int n, i, sum;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  sum = 0;                           //to calc sum to nterms
  for (i = 1; i <= n; i++) {
    sum += 10 * i + 1;
  }
  
//  	sum = 0;                            //to calc sum upto n
//	for(int i=11; i<=n; i+=10){
//	sum+=i;
//	}

  printf("The sum of the series is: %d\n", sum);

  return 0;
}
