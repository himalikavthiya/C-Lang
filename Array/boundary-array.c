// 10.WAP to print & find sum of all boundary elements of 5X5 array.

#include<stdio.h>

int main(){

   int a[5][5],i,j,n,sum=0;

    for(i=0 ;i<5; i++){
        for(j=0 ;j<5; j++){
            printf("Enter array value:");
            scanf(" %d",&a[i][j]);
        }
    }

    for(i=0; i<5 ;i++){
        for(j=0; j<5; j++){
            printf(" %d",a[i][j]);
            if(i==0 || j==0 || i==4 || j==4){
                sum+=a[i][j];
            }
        }
        printf("\n");
    }
        printf("Boundary elements Sum: %d",sum);
   
    return 0;
}