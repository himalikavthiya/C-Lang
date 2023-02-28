#include<stdio.h>

 main(){
 	
    int num;
    
    printf("Enter Number: ");
    scanf("%d",&num);
 
    if(num == 0)
    	 printf("This Number positive nor negative");
	else if(num < 0)
		printf("Negative");
	else
		printf("Positive");
	
}
