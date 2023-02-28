#include<stdio.h>

 int main() {
	
	int i=1,n,sum=0;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	
	
	while(i<=n){
		sum =sum+i;
		printf("%d \n",i);
		i++;
	}
	printf("this value is sum: %d",sum);
	return 0;
}
