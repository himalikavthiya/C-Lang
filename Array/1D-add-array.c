/* 4.WAP to find peform addition of 1D array & store it into another. */

#include<stdio.h>

int main(){

    int a[10],b[10],sum[20],n,i;

       printf("Enter the first array size:");
       scanf(" %d",&n); 
    
       for(i=0;i<n;i++){
        printf("Enter First array value:");
        scanf("%d",&a[i]); 
      } 

       printf("Enter the second array size:");
       scanf(" %d",&n);

       for(i=0;i<n;i++){
        printf("Enter Second array value:");
        scanf("%d",&b[i]); 
      } 
      
           for(i=0;i<n;i++){
              sum[i]=a[i]+b[i]; 
            }
             printf("\nSum of these two array is :");
             for(i=0;i<n;i++)
             {
               printf("%d ",sum[i]);
             }
       return 0;

}