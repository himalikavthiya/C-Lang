#include<stdio.h>

int main(){
	
	int n,r,s=0,temp;
	
	printf("Enter value Of N :");
	scanf("%d",&n);
	
	temp=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
    printf("Revers No : %d \n",s);

	if(temp==s)
          printf("%d is a palindrome.");
	else 
	  printf("%d is not a palindrome.");
	return 0;
}
