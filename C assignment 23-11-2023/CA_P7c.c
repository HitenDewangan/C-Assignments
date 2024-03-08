//Problem 7       101+202+303+.....n terms

//Code #3
#include <stdio.h>

int main() {
  	int n, i, sum;

  	printf("Enter the number of terms: ");
  	scanf("%d", &n);

  	if (n >= 1000) {
    	printf("Invalid input. The value of n should not be more than three digits.\n");
    	return 1;
  	}

//  	sum = 0;                         //to cal sum to n terms
//  	for (i = 1; i <= n; i++) {
//  		sum+=(i*100)+i;
//  	}
  	
  	sum = 0;                            //to calc sum upto n
	for(int i=101; i<=n; i+=101){
	sum+=i;
	}

  	printf("The sum of the series is: %d\n", sum);

  	return 0;
}
