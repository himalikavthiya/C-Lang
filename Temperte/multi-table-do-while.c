#include<stdio.h>

int main(){
	
	int i=1,n;
	
	printf("Enter any No : ");
	scanf("%d",&n);

	do{
       printf("%d * %d = %d \n",n,i,n*i);
	   i++;
	}while(i<=10);
	
	// for(i=1;i<=10;i++){
	
	// 	printf("%d * %d = %d \n",n,i,n*i);	
	// }

	return 0;
}
