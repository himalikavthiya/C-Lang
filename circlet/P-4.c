/*  A
    B B
    C C C
    D D D D
    E E E E E */

#include<stdio.h>

int main(){

    char i,j;
    
    for(i='A';i<='E';i++)
    {
        for(j=i;j>='A';j--)
        {
           printf(" %c",i);
        }
       
        printf("\n");
    }
 return 0;
}
