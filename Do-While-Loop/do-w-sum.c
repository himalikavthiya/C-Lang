#include<stdio.h>

int main(){
	
	int i=1,n,sum=0;
	
	printf("Enter any No: ");
	scanf("%d",&n);
	
	do{
		sum=sum+i;
		printf("%d \t",i);
		i++;
		
	}while(i<=n);
	printf("this value is sum: %d \n",sum);
	return 0;
	
}
