#include<stdio.h>

 int main() {
	
	int i=1,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d in Odd Number\n",n);
	
	do{
	    if(n%2==0)
		printf("%d \t",n);
		n--;	
	}
	while(i<=n);

	return 0;
}
