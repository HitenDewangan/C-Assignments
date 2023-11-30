//program 9
#include<stdio.h>
int max_profit(int a, int b, int c){
	int ct1=0, ct2=0, ct3=0, choice, weight =0, price=0;
	if(n>6){
		printf("\n!!! MAX combination is 6 !!!");
		return;
	}
	while(n>0){
		
	}
	
	for(int i=1; i<=n; i++){
		printf("\nEnter the no. of item(1,2,3): ");
		scanf("%d",&choice);
		
		if(choice==1){
			weight+=3;
			price+=12;
			ct1+=1;
		}
		else if(choice==2){
			weight+=4;
			price+=16;
			ct2+=1;
		}
		else if(choice==3){
			weight+=5;
			price+=20;
			ct3+=1;
		}	
	}
	if(ct1<1 || ct2<1 || ct3<1){
		printf("One of the items is not selected !!!");
	}
	else if(weight>20){
		printf("\nError!!!Weight > 20 ");
	}
	else if(weight<=20||(ct1<=2 && ct2<=2 && ct3<=2)){
		printf("\nTotal Weight is: %d",weight);
		printf("\nTotal price is: %d",price);
	}
	return 0;
}
	
}

int main(){
	int item1=12, item2=16, item3=20, n;

	printf("Weight of item1 = 3kg, item2 = 4kg, item3 = 5kg");
	printf("\nYour combination has how many items:");
	scanf("%d",&n);
	printf("\nEnter combination of items(1,2,3) max you can select %d: ",n);
	max_price()
	return 0;
}
	
	

	
	
	
	
	
	
	
	
	