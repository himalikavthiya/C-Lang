#include<stdio.h>

int main (){
	
	int i=1,n,multi=1;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		multi=multi*i;
		printf("%d \n",i);
	}
	
		printf("This Factorial No: %d",multi);
	return 0;
	
}
