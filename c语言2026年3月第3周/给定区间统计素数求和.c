#include <stdio.h>
int main()
{
    int x,c=0;
    int m,n;
    int sum=0;
	printf("请输入左区间");
	scanf("%d",&m);
	printf("请输入右区间");
	scanf("%d",&n);
	for(x=m;x<=n;x++)
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
			sum+=x;
	    	//printf("%d ",x);
			c++	;
		}
	}
	//printf("\n");
	printf("一共有%d个素数,其和为%d\n",c,sum);
    return 0;
}
