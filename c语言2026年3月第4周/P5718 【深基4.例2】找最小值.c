#include <stdio.h>
int times;
void min(int m);
int main()
{
	int n;
	scanf("%d",&n);
	int i=0;
	int m;
	while(i<n)
	{
		scanf("%d",&m);
		if(i==0)
		times=m;
		min(m);
		i++;
	}
	printf("%d",times);
	return 0;
}
void min(int m)
{
	if(times>m)
	times=m;
}
