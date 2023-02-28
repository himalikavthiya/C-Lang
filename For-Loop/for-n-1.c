#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d\n",n);
	
	for(i=n;i>=1;i--)
	{
		printf(" %d\n",i);
	}
	
	return 0;
}
