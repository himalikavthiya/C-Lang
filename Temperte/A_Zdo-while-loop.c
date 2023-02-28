#include <stdio.h>

int main(){

    char ch='A';

    do{
        printf("%c \t",ch);
        ch++;
    }while(ch<='Z');

    return 0;

}