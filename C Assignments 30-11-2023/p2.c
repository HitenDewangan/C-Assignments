//Write a program in C to check whether a number is a prime number or not using the function

#include<stdio.h>

int isPrime(int n, int flag);

int main(){
	int n, flag=0;
	printf("Enter a number: ");
	scanf("\n%d", &n);
	isPrime(n,flag);
	
	return 0;
}

   //0 and 1 are not prime no.
    //change flag to 1 for non-prime number
int isPrime(int n, int flag){
	if(n==0 || n==1)
        flag=1;
        
 	for(int i=2; i<=n/2; i++){
 		
 		//if n is divisible by i, then n is not prime
        //change flag to 1 for non-prime
 		if(n%i == 0){
 			flag = 1;
 			break;
 		}
	}
	
	if(flag==0)
		printf("%d is a prime number.",n);
	else
 		printf("%d is NOT a prime number.", n);
 	return 0;
}