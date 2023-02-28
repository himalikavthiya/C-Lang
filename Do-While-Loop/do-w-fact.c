#include<stdio.h>

int main (){
	
	int i=1,n,multi=1;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	
	do{
		multi=multi*i;
		printf("%d \n",i);
		i++;
		
	}while(i<=n);
		printf("This Factorial No: %d",multi);
	return 0;
	
}
