//Write a program to check whether your birth year is Leap Year or not
#include<stdio.h>

int main(){
	int year;
	printf("Enter your birth year:");
	scanf("%d",&year);
	
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){      
				printf("Leap Year !!!");
			}
			else{
				printf("Not a Leap Year !!!"); 
			}
		}
		else{
			printf("Leap Year !!!"); 
		}
	}
	else{
		printf("Not a leap Year !!!");
	}
	return 0;
}