#include<stdio.h>

int main(){
	int a=5,b=6;
//	printf("%d,%d,%d",a+=b,a+=b,a+=1);
//	if (a+=b)
//  int n = (a+=b>(b+=a));
	if(a+=b==11){
		printf("%d, %d\n",a,b);
//		printf("%d,%d,%d",a+=b,a+=20,a+=10);
		printf("%d,%d",a+1,a+=11,a+=b);
	}
	return 0;
}