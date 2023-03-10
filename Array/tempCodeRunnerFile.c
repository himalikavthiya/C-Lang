#include<stdio.h>

int main(){

    int a[10],n,i,j,k,pos;

    printf("Enter Array Size: ");
    scanf("%d ",&n);

    for(i=0;i<n;i++){
        printf("Enter Array value:");
        scanf("%d ",&a[i]);
    }
    return 0;
}