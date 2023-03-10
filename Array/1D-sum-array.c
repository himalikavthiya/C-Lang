/* 1D array & sum  */

#include<stdio.h>

int main(){

    int a[10],n,i,sum=0;

    printf("Enter array size:");
    scanf(" %d",&n);

    for(i=0;i<n;i++){
        printf("Enter value:");
        scanf(" %d",&a[i]);
    }
    for(i=0;i<n;i++){
        
        printf(" %d",a[i]);
        sum=sum+a[i];
    }
    printf("sum= %d\n",sum);
    return 0;

}