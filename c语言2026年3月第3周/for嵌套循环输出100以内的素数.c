#include <stdio.h>
int main()
{
    int x,c=0;
	for(x=2;x<=100;x++)
	{   
		int i;
    	int isPrime = 1;
	    for (i=2; i<x; i++) 
		{
	      if (x % i == 0)
		 {
	      isPrime = 0;
	      break;
	     }
	    }
	    if (isPrime == 1)
		{  
	    	printf("%d ",x);
			c++	;
		}
	}
	printf("\n");
	printf("一共有%d个素数\n",c);
    return 0;
}
