#include <stdio.h>

main() {
	
	int w,x,y,z;
	
	printf("Enter Value Of W : ");
	scanf("%d",&w);
	
	printf("Enter Value Of X : ");
	scanf("%d",&x);
	
    printf("Enter Value Of Y : ");
	scanf("%d",&y);
	
	printf("Enter Value Of Z : ");
	scanf("%d",&z);
	
	if(w>x)
	{ 
	    if(w>y)
	    {
		   if(w>z)
		    {  
		   	 printf("Biggest Value is W : %d",w);
		    }
		    else{
		   	printf("Biggest Value is Z : %d",z);
		    }
    
		}
		else{
	  	      if(y>z){
	  	      	    printf("Biggest Value is Y : %d",y);
				}else{
					printf("Biggest Value is Z : %d",z);
				}    
			}
	}
	else{
		  if(x>y){
		  	     if(x>z){
			   	    printf("Biggest Value is X : %d",x);    
			     }else{
			   	    printf("Biggest Value is Z : %d",z);
		        }      
		    } 
			else{
			     if(y>z){
			     	 printf("Biggest Value is Y : %d",y);
				 }
				 else{
				 	 printf("Biggest Value is Z : %d",z);
				 }
			     
			}
		    	
	    } 
}

	
	









	

