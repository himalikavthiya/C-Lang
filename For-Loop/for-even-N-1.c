#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf(" \n 1 to %d in Print Even No \n",n);
	
	for(i=n;i>=1;i--)
	{
		if(i%2==0)
		printf(" %d \t",i);
	}
	return 0;
}
