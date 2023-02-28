#include<stdio.h>

 int main() {
	
	int i=1,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d\n",n);
	
	do{
		printf("%d \n",n);
		n--;
	}while(i<=n);
	
	return 0;
}
