#include <stdio.h>
int main()
{
	int a,b,t;
	int m,n;
	scanf("%d %d",&a,&b);
	m=a;
	n=b;
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d与%d的最大公约数:%d",n,m,a);
	return 0;
}
