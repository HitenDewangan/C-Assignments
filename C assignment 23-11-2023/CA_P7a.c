//Problem 7        2+4+6+.....nterms

//Code #1
#include <stdio.h>

int main() {
  	int n, i, sum;

  	printf("Enter the number of terms: ");
  	scanf("%d", &n);
	
//	sum = 0;                                //to  calc sum of series
//  	for (i = 1; i <= n; i++) {
//    	sum += 2 * i;
//  }
  
	sum = 0;                            //to calc sum upto n
	for(int i=2; i<=n; i+=2){
	sum+=i;
	}

  printf("The sum of the series is: %d\n", sum);

  return 0;
}
