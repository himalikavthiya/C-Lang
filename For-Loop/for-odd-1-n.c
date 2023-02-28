#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf(" \n 1 to %d in print odd no \n",n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf(" %d \t \n",i);
	}
	return 0;
}
