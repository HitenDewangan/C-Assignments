//Problem 5
#include<stdio.h>

int main(){
	int score;
	printf("Enter your score: ");
  	scanf("%d", &score);

  	if (score >= 90 && score <= 100) {
    	printf("Your grade is A+.\n");
  	} 
  	else if (score >= 80 && score <= 89) {
    	printf("Your grade is A.\n");
  	}	 
  	else if (score >= 70 && score <= 79) {
    	printf("Your grade is B+.\n");
  	} 
	else if (score >= 60 && score <= 69) {
    	printf("Your grade is B.\n");
 	} 
	else if (score >= 50 && score <= 59) {
    	printf("Your grade is C+.\n");
  	}
  	else if (score >= 40 && score <= 49) {
    	printf("Your grade is C.\n");
 	} 
  	else {
    	printf("You are not qualified for the contest.\n");
  	}

  return 0;


}