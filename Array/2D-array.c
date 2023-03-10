/* 2D Array in row & column wise*/

#include<stdio.h>

    int main(){

    int a[10][10],r,c,i,j;

    printf("Enter row size:");
    scanf("%d",&r);
 
    printf("Enter column size:");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      {
            printf("Enter Value a[%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
     {
         printf("\n");
           for(j=0;j<c;j++){
            printf("%d\t",a[i][j]); 
        }
     }
     return 0;
    }

    