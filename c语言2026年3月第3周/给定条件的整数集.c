#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int i,j,k;
	int a=0;
	for(i=x;i<=x+3;i++)
	{
		for(j=x;j<=x+3;j++)
		{
			for(k=x;k<=x+3;k++)
			{
				if(i!=j)
				{
					if(i!=k)
					{
						if(j!=k)
						{
							printf("%d%d%d",i,j,k);
							a++;
							if(a%6!=0)
							printf(" ");
							if(a%6==0)
							{
							printf("\n");
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
