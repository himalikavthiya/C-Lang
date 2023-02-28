#include <stdio.h>
main()
{
    int a, b, c, d, big;
    printf("\n Enter value to a, b, c, d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a >b)
    {
        if(a>c)
        {
            if(a>d)
            big = a;
            else
            big=d;
        }
        }else
           {
           if(c>d)
            big = c;
            else
            big = d;
        }
        }else{
		
            if(b>c)
            {
                if(b>d)
                big = b;
                else
                big = d;
            }
    }
    printf("\n The biggest number is %d", big);
    return 0;
}
