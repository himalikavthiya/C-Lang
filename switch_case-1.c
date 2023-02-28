#include <stdio.h>

 int main() {

    char a;

    printf("Telecom Call Conversation Say : ");
    scanf("%c",&a);

    switch(a){

        case'H':
        case'h':
             printf("Hello Dear....");
             break;

        case'W':
        case'w':
             printf("Hello Dear Welcome....");
             break;

        case'T':
        case't':
             printf("Thanks you....");
             break; 

        case'n':
        case'N':
             printf("Nice to talk you.....");
             break;  

        default:
             printf("Incarrect character..."); 
    }
    return 0;
}