// WAP to Update value in 1D-array.

#include<stdio.h>

int main(){

    int i,a[10],n,pos,val;

    printf("Enter array size:");
    scanf(" %d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&a[i]);
    }
    printf("Enter Update value:");
    scanf(" %d",&val);

    printf("Enter Update Position:");
    scanf(" %d",&pos);

    for(i=n; i<val; i++){
        a[i]=a[i+1];
    }
    a[pos]=val;

    for(i=0; i<n; i++){
        printf(" %d",a[i]);
    }

    return 0;
}