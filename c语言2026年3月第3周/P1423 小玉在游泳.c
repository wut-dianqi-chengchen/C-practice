#include <stdio.h>
int main()
{
	double s;
	scanf("%lf",&s);
	double x=2;
	double sum=0;
	int i=0;
	while(s>sum)
	{
		sum+=x;
		x=0.98*x;
		i++;
	}
	printf("%d",i);
	return 0;
}

