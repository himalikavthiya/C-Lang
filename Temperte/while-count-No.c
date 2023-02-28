#include<stdio.h>

int main(){
	
	int n,count=0;
	
	printf("Enter any Digit :");
	scanf("%d",&n);
	
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	printf(" Total Count of Digit = %d \n",count);
	return 0;
	
}
