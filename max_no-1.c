#include<stdio.h>

main() {
	
	int a,b;
	
	printf("Enter Value Of A : ");
	scanf("%d",&a);
	
	printf("Enter Value Of B : ");
	scanf("%d",&b);	
	
	if(a>b){
		printf("Biggest value is A : %d",a);
	}else{
		printf("Biggest value is B : %d",b);
	}
	
}
