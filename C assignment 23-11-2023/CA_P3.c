//Write a C Program to check whether a given number is divisible of 
//3 and 5.
#include<stdio.h>

int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	if(x%15==0){
		printf("\n%d is divisible by 3 and 5", x);
	}
	else{
		printf("\n%d is not divisible by 3 and 5", x);
	}
	
	return 0;
}