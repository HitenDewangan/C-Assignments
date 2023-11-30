//Write a program in C to check if a given number is even or odd using the function.

#include<stdio.h>

int EvenOdd(int n);

int main(){
	int n;
	printf("Enter a number: ");
	scanf("\n%d", &n);
	EvenOdd(n);
	
	return 0;
}

int EvenOdd(int n){
 	if (n%2==0) {
    printf("%d is even.\n", n);
  } else {
    printf("%d is odd.\n", n);
  }
}