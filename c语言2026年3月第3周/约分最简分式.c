#include <stdio.h>
int main()
{
	int a,b,t;
	int m,n;
	printf("请输入分子: ");
	scanf("%d",&a);
	printf("请输入分母: ");
	scanf("%d",&b);
	m=a;
	n=b;
	while(b!=0)
	{
		t=a%b;
		a=b;
		b=t;
	}
	printf("%d与%d的最大公约数:%d\n",n,m,a);
	printf("分式为%d/%d",m/a,n/a);
	return 0;
}
