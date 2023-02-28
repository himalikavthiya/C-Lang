#include<stdio.h>

 int main() {
	
	int i=1,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d in Odd Number\n",n);
	
	while(i<=n){
		if(i%2==1)
		printf("%d \t",i);
		i++;
	}
	return 0;
}
