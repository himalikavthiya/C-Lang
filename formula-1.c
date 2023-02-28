#include<stdio.h>

main() {
	
	int x=40,y=50,z=20; 
	int ans;
	
    //(x+y)²=(x*x)+(2*x*y)+(y*y)
	ans=(x*x)+(2*x*y)+(y*y);
	printf("(x+y)^2= %d\n\n",ans);
	
	 //(x-y)² = (x*x) - (2*x*y) + (y*y)
	ans= (x*x)-(2*x*y)+(y*y);
	printf("(x-y)^2= %d\n\n",ans);
	
	//(x+y)3 =  (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y)
	ans=(x*x*x)+((3*x*y)*(x+y))+(y*y*y);
	printf("(x+y)3= %d\n\n",ans);
	
	//(x-y)3 =(x*x*x) - (y*y*y) - ((3*x*y)*(x+y))
	ans=(x*x*x)-(y*y*y)-((3*x*y)*(x+y));
	printf("(x-y)3= %i\n\n",ans);
	
	//(x+y+z)3 =(x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y)(y+z)(z+x))
	ans= (x*x*x) + (y*y*y) + (z*z*z) + (3*(x+y))+(3*(y+z))+(3*(z+x));
	printf("(x+y+z)3= %i\n\n",ans);
	
	//(x-y-z)3 =(x*x*x)+(y*y*y)+(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+x))
	ans=(x*x*x)+(y*y*y)+(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));
	printf("(x-y-z)3 = %i\n\n",ans);
	
	//(x+y+z)² =(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x))
	ans=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
	printf("(x+y+z)^2= %i\n",ans);
	
		
}
