#include <stdio.h>

 int main() {

    int n;

    printf("Enter any No : ");
	scanf("%d",&n);

    if(n % 2 == 0){
        printf("This number is Even...");
    } else{
        printf("This number is Odd... ");
    }   
    return 0;
 }
