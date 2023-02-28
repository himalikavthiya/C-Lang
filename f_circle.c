#include<stdio.h>

main(){
	
	// Find Area of circle
	
	const double pi=3.14;
	double R=2;
	double Ans;
	
	Ans=pi*R*R;
	printf("\n\tArea of circle=%lf\n",Ans);
	
	
	// Find Area of squre.
	
	int s=10;
	int squre;
	
	squre=(s*s);
	printf("\n\tArea of Squre=%d\n",squre);
	
	//Find Area of rectangle
	
	int l=30;
	int b=10;
	int rec;
	
	rec=l*b;
	printf("\n\tArea of Rectangle=%d\n",rec);
	
	//Find Area of triangle
	
	double q=20;
	double h=10;
	double T;
	
	T=0.5*q*h;
	printf("\n\tArea of Triangle=%lf\n",T);
	
	//Find simple interest
	
	int p=50000;
	int t=5;
	int r=4,ans;
	
	ans=p*t*r/100;
	printf("\n\tSimple Interest=%d\n",ans);
	
	//Find perimeter of circle
	
	float p_ci;

    p_ci=2*pi*r;
    printf("\n\tPerimeter of Circle=%f",p_ci);
	
	
}
