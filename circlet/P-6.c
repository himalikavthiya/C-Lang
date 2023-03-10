/*   4 5
     4 5 4 6
     4 5 4 6 4 7
     4 5 4 6 4 7 4 8
     4 5 4 6 4 7 4 8 4 9 */
     
#include<stdio.h>

int main(){

    int i,j;

    for(i=45;i<=49;i++){

        for(j=45 ;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}