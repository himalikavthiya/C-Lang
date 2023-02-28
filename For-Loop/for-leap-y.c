#include<stdio.h>

int main(){
	
	int y=2000, count=0;
	
	for(y=2000;y<=3000;y++)
	{
	   if(y%4!=0){
	   	    printf("%d ",y);
	   	    count++;
		}
		else if(y%100!=0){
		}	
		else if(y%400!=0){
			printf("%d ",y);
			count++;
		}
		else{
			
		}
	}
	printf("\n Total 2000 to 3000 in leap year: %d",count);
	return 0;
	
}
