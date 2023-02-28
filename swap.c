#include<stdio.h>

main(){
	
	//Swap two varible useing thrid varible
	int a=30;
	int b=20;
	int c;
	printf("a=30\n");
	printf("b=20\n\n");
	
	c=a;
	a=b;
	b=c;
	printf("After swap value a=%d\n",a);
	printf("After swap value b=%d\n",b);
	
	
	//Swap two varible without third varible
	printf("Before swap a=20\n");
	printf("before swap b=30\n");
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swap a=%d b=%d",a,b);	
 
}
