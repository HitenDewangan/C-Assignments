#include<stdio.h>

//int main(){
//	float a=5, b=1.5, c=(a+b);
//	printf("%d,%d,%d,%d",a>=c,a!=c,a==c,a*=c);
//
//	return 0;
//
//}

int main(){
	int a=5,b=6;
//	printf("%d,%d,%d",a+=b,a+=b,a+=1);
//	if (a+=b)
//  int n = (a+=b>(b+=a));
	if(((a+=b)>(b+=a))){         //a=11, b=17       () has left to right precedence
		printf("%d, %d\n",a,b);
//		printf("%d,%d,%d",a+=b,a+=20,a+=10);
		printf("%d,%d",a+=20,a+=10);
	}
	else
	printf("%d,%d",a,b);
	return 0;
}