#include<stdio.h>

  int main(){
	
	int i,n,sum=0;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d\n",n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
		printf(" %d \t ",i);
		
	}
	printf(" \n sum of 1 to N No: %d \n",sum);
	return 0;
}
