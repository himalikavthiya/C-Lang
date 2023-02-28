#include <stdio.h>

 int main() {

    char a;

    printf("Enter short week name : ");
    scanf("%c",&a);

    switch(a){

        case'm':
             printf("Monday.");
             break;

        
        case't':
             printf("Tuesday");
             break;

       
        case'w':
             printf("Wednesday");
             break; 

       
        case'T':
             printf("Thursday");
             break;  

        case'f':
             printf("Friday");
             break; 

        case's':
             printf("Saturday");
             break; 

        case'S':
             printf("Sunday");
             break; 

        default:
             printf("Incarrect character..."); 
    }
    return 0;
}