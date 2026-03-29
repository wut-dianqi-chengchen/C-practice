#include <stdio.h>
int main()
{
	int n;
	printf("n=");
	scanf("%d",&n);
	int a=1,b=1;
	while(a<=n)
	{
		b*=a;
		a++;
	}
	printf("n!=%d",b);
}
