/* 2.WAP to find length of 1D array.*/

#include<stdio.h>

int main(){

    int a[]={80,90,100,110,120,3,4,8,9,50,60,7,88,98,77,66,55};
    int size;

    size= sizeof(a)/sizeof(a[0]);
    printf("The length of the array is %d \n",size);
    return 0;
}
