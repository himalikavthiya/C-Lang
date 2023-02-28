#include<stdio.h>

int main(){

    int i,j;
    char ch='A';

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j++)
        {
            printf(" %c",ch++);  
            
        }
        printf("\n");
    }
    return 0;
}
