#include<stdio.h>

 int main() {
	
	int i=1,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);
	printf("No is 1 to %d in Even Number\n",n);
	
	while(i<=n){
		if(n%2==0)
		printf("%d \t",n);
		n--;
	}
	return 0;
}
