#include<stdio.h>

 int main() {
	
	int y=2000,count=0;
	
	do{
	    if(y%4!=0){
	      
		}
		else if(y%100!=0)
		{
		     printf("%d \t",y);
		     count++;
		}
		else if (y%400!=0){
		}
		else{
			printf("%d \t",y);
		     count++;
		}
		y++;   
	
	}while(y<=3000);
     printf("\n no of leap year: %d",count);
	return 0;
}
