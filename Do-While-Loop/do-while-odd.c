#include<stdio.h>

 int main() {
	
	int i=1,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d in Odd Number\n",n);
	
	do{
	    if(i%2==1)
		printf("%d \t",i);
		i++;	
	}
	while(i<=n);

	return 0;
}
