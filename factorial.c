#include<stdio.h>  
int main()    
{    
 int i,f=1,no;  

   printf("Enter a number: ");    
   scanf("%d",&no);    
    for(i=1;i<=no;i++){    
      f=f*i;    
  }    
  printf("Factorial of %d is: %d",no,f);    
  return 0;  
}  