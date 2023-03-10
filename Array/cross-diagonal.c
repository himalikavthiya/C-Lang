// 9.WAP to perform cross-diagonal sum of 2D array.

#include<stdio.h>

int main(){

    int a[10][10],n,i,j,sum=0;

    printf("Enter Array size:");
    scanf(" %d",&n);

    for(i=0 ;i<n; i++){
        for(j=0 ;j<n; j++){
            printf("Enter array value:");
            scanf(" %d",&a[i][j]);
        }
    }

    for(i=0; i<n ;i++){
        for(j=0; j<n; j++){
            printf(" %d",a[i][j]);
            if(i==j || i+j==n-1){
                sum+=a[i][j];
            }
        }
        printf("\n");
    }
    
    printf("Cross digonal Sum: %d",sum);
   
    return 0;
}