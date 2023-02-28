#include<stdio.h>

int main(){
	
	int n,fd,ld;
	
	printf("\nEnter Any digit : ");
	scanf("%d",&n);
	
	ld=n%10;
	while(n>=10)
	{	
		n=n/10;
	}
	fd=n;
	printf("\nSum of first digit & Last digit : %d",fd+ld);
	
	return 0;
}
