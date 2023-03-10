// 8.WAP to perform anti-diagonal sum of 2D array.

#include<stdio.h>

int main(){

    int r,c,i,j,sum=0;

     printf("Enter row size:");
    scanf("%d",&r);
 
    printf("Enter column size:");
    scanf("%d",&c);

    int a[r][c];

    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
            printf("Enter Value a[%d] [%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
          for(j=0; j<c; j++)
          {
            printf(" %d",a[i][j]); 
          }
            printf("\n");    
    }
    for (i = 0; i < r; i++) {
        sum += a[i][c-1-i];
    }
        printf("Anti-Diagonal sum = %d",sum);
    return 0;
}
