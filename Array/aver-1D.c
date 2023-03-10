// 3.WAP to find average of 1D array.

#include<stdio.h>

    int main(){

    int a[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int i,sum=0;
    float avg=0;

    for(i=0;i<10;i++){
        printf(" %d\n",a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/i;
     printf("Average of array values is %.2f", avg);  
   
    return 0;
}
    
  

