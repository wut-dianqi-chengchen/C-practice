#include <stdio.h>
int main()
{
	int l;
	int m;
	int i;
	int n;
	int j=1;
	int sum=2;
	scanf("%d",&l);
	if(l<2)
	{
		printf("0");
		return 0;
	}
	printf("2\n");
	for(i=2;sum<=l;i++)
	{
		m=0;
		for(n=2;n<i;n++)
		{
			if(i%n==0)//不是质数
			break;
			else
			m=1; 
		}
		if(m==1)
		{
			sum+=i;
			if(sum>l)
			break;
			printf("%d\n",i);
			j++;
		}
	}
	printf("%d",j);
	return 0;
}
