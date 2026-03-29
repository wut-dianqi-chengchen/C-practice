#include <stdio.h>
int main()
{
	int x;
	int a=1;
	scanf("%d",&x);
	x/=10;
	while(x>0)
	{
		a++;
		x/=10;
	}
		while(x<0)
	{
		a++;
		x/=10;
	}
	printf("ÊÇ%dÎ»Êý",a);
	return 0;
}
