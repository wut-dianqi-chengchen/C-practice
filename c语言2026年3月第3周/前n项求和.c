#include <stdio.h>
int main()
{
	int i;
	int n;
	float sum=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		sum=sum+1.0/i;
	}
	printf("f(n)=%f",sum);
	return 0;
}
