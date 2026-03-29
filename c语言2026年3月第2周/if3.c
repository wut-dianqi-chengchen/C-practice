#include<stdio.h>
int main()
{
	int x;
	int a=1;
	scanf("%d",&x);
	if(x>999)
	a=4;
	else if(x>99)
	a=3;
	else if(x>9)
	a=2;
	printf("ÊÇ%dÎ»Êı",a);
}
