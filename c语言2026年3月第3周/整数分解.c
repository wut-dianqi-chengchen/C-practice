#include <stdio.h>
int main()
{
	int x=0;
	int a=1;
	int h=0;
	scanf("%d",&x);
	int t=x;
	while(t>9)
	{
		t=t/10;
		a*=10;
	}
	do
	{
		h=x;
		h/=a;
		printf("%d",h);
		if(a>0)
		printf(" ");
		x%=a;
		a/=10;
	}while(a>0);
	return 0;
}
