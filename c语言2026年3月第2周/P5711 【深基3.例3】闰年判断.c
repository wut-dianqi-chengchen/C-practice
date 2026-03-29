#include <stdio.h>
int main()
{
	int a;
	int b=0;
	scanf("%d",&a);
	if(a%4==0)
	{
		if(a%100!=0)
		b++;
	}
	if(a%400==0)
	b++;
	printf("%d",b);
	return 0;
}
