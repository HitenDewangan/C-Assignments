//Write a C  program that assigns 1 to x if y is greater than 0
//Value of y has to be scanned from the keyboard.
#include<stdio.h>

int main(){
	int x,y;
	printf("Enter the value of y: ");
	scanf("%d", &y);
	
	if(y>0){
		x=1;
	}
	else{
		x=0;
	}
	
	printf("\nThe value of x is: %d", x);
	
	return 0;
}