//Write a Program to implement the eligibility criteria of Army Selection and 
//display valuable message on to the screen.
#include<stdio.h>
int main(){
	int age, height, education;
	char nationality, gender;
	
	printf("Enter your age: ");
  	scanf("%d", &age);

 	printf("Enter your height (in centimeters): ");
  	scanf("%d", &height);

  	printf("Enter your education level (10th pass, 12th pass, graduate): ");
  	scanf("%d", &education);

  	printf("Enter your nationality (I for Indian): ");
  	scanf(" %c", &nationality);

  	printf("Enter your gender (M for Male, F for Female): ");
  	scanf(" %c", &gender);
	
	if(age >= 17 && age <= 25){
		if(height >= 157.5){
			if(education >= 10){
				if(nationality == 'I'){
					if(gender == 'M' || gender == 'F'){
						printf("Congratulations! You are eligible to join the Indian Army.\n");
					} else {
            			printf("Sorry, you are not eligible to join the Indian Army due to invalid gender.\n");
          			}
        } else {
        	printf("Sorry, you are not eligible to join the Indian Army due to invalid nationality.\n");
    	}
      } else {
        printf("Sorry, you are not eligible to join the Indian Army due to insufficient education.\n");
      }
    } else {
      printf("Sorry, you are not eligible to join the Indian Army due to insufficient height.\n");
    }
  } else {
    printf("Sorry, you are not eligible to join the Indian Army due to invalid age.\n");
  }
  return 0;
}