// WAP to Insert value in 1D-array.

#include<stdio.h>

int main(){

    int i,a[10],n,pos,val;

    printf("Enter array size:");
    scanf(" %d",&n);

    for(i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&a[i]);
    }
    printf("Enter Insert value:");
    scanf(" %d",&val);

    printf("Enter Insert Position:");
    scanf(" %d",&pos);

    for(i=n; i>pos; i--){
        a[i]=a[i-1];
    }
    a[pos]=val;

    for(i=0; i<n+1; i++){
        printf(" %d",a[i]);
    }

    return 0;
}