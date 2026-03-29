#include <stdio.h>
int store;
int money=0;
int sum=0;
void ptb(int a)
{
	money+=300;
	store=(money-a)/100;
	sum+=store;
	money=money-a-100*store;
}
int main()
{
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&a3);
	scanf("%d",&a4);
	scanf("%d",&a5);
	scanf("%d",&a6);
	scanf("%d",&a7);
	scanf("%d",&a8);
	scanf("%d",&a9);
	scanf("%d",&a10);
	scanf("%d",&a11);
	scanf("%d",&a12);
	ptb(a1);
	if(money<0)
	{
		printf("-1");
		return 0;
	}
	ptb(a2);
	if(money<0)
	{
		printf("-2");
		return 0;
	}
	ptb(a3);
	if(money<0)
	{
		printf("-3");
		return 0;
	}
	ptb(a4);
	if(money<0)
	{
		printf("-4");
		return 0;
	}
	ptb(a5);
	if(money<0)
	{
		printf("-5");
		return 0;
	}
	ptb(a6);
	if(money<0)
	{
		printf("-6");
		return 0;
	}
	ptb(a7);
	if(money<0)
	{
		printf("-7");
		return 0;
	}
	ptb(a8);
	if(money<0)
	{
		printf("-8");
		return 0;
	}
	ptb(a9);
	if(money<0)
	{
		printf("-9");
		return 0;
	}
	ptb(a10);
	if(money<0)
	{
		printf("-10");
		return 0;
	}
	ptb(a11);
	if(money<0)
	{
		printf("-11");
		return 0;
	}
	ptb(a12);
	if(money<0)
	{
		printf("-12");
		return 0;
	}
	printf("%d",120*sum+money);
	return 0;
}
