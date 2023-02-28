#include<stdio.h>

main() {
	
	int a,b,c;
	
	printf("Enter Value Of A : ");
	scanf("%d",&a);
	
	printf("Enter Value Of B : ");
	scanf("%d",&b);
	
    printf("Enter Value Of C : ");
	scanf("%d",&c);
	
	if(a<b){
		if(a<c){
			printf("Smallest value is A :%d",a);
		}else{
			printf("Smallest value is C :%d",c);
		}
		
	}else{
		if(b<c){
			printf("Smallest value is B :%d",b);
		}else{
			printf("Smallest value is C1 :%d",c);
		}
	}
}

