/* 5.WAP to find peform merging of 1D array & store it into another.*/

#include<stdio.h>

int main(){

    int a[10],b[10],c[20],n1,n2,i,j;

       printf("Enter the first array size:");
       scanf(" %d",&n1); 
    
       for(i=0;i<n1;i++){
        printf("Enter First array value:");
        scanf("%d",&a[i]);
        c[i]=a[i]; 
      } 
        j=i;

       printf("Enter the second array size:");
       scanf(" %d",&n2);

       for(i=0;i<n2;i++){
        printf("Enter Second array value:");
        scanf("%d",&b[i]); 
        c[j]=b[i];
         j++;
      } 
      printf("\nThe new array after merging is:\n");
    
        for(i=0;i<j;i++){
            printf(" %d",c[i]);
        }
    return 0;
}
