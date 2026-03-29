#include <stdio.h>
int main()
{
	int n=0;
	scanf("%d",&n);
	int i=1;
	int j=n;
	int sum=0;
	int k=0;
	while(j>0)
	{
		sum+=j;
		j--;
	}
	while(i<=sum)
	{
		if(i<=9)
		printf("0%d",i);
		else
		printf("%d",i);
		k++;
		if(k==n)
		{
			printf("\n");
			n--;
			k=0;
		}
		i++; 
	}
	return 0;
}
