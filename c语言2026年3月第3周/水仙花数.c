#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int j=1;
	while(i<n)
	{
		j*=10;
		i++;
	}
	i=j;
	int k,l;
	int sum=0; 
	while(i<j*10)
	{
		k=i;
		while(k>0)
		{
			l=k%10;
			k/=10;
			int o=1;
			int p=l; 
			while(o<n)
			{
				l*=p;
				o++;
			}
			sum+=l;
		}
		if(sum==i)
		printf("%d\n",i);
		sum=0; 
		i++;
	}
	return 0;
}
