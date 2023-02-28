#include <stdio.h>

 int main() {

    double unit,ans,s,charge;

    printf("Enter your bill unit: ");
    scanf("%lf",&unit);

    if(unit<=50){
        s=unit*0.50;

    }else if(unit<=150){
        s=(unit-50)*0.75+25;

    }else if(unit<=250){
        s=(unit-150)*1.20+100;

    }else {
        s=(unit-250)*1.50+220;
    }
    charge=s*0.2;
    ans=s+charge;
    printf("Total : %0.2lf\n",s);
    printf("chrage: %0.2lf\n",charge);
    printf("Final bill: %0.2lf",ans);

    return 0;
 }
