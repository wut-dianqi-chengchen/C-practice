#include <stdio.h>
int main()
{
	int a;
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d",i,j,i*j);
			if(i*j<10)
			printf("   ");
			else
			printf("  ");
		}
		printf("\n");
	}
	return 0;
}
