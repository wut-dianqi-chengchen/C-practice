#include <stdio.h>
int main()
{
	int a,b,c;
	int t;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		t=b;
		b=a;
		a=t;
	}
	if(a>c)
	{
		t=c;
		c=a;
		a=t;
	}
	if(b>c)
	{
		t=c;
		c=b;
		b=t;
	}
	if(a+b<=c)
	{
		printf("Not triangle\n");
		return 0;
	}	
	if(a*a+b*b==c*c)
	printf("Right triangle\n");
	if(a*a+b*b>c*c)
	printf("Acute triangle\n");
	if(a*a+b*b<c*c)
	printf("Obtuse triangle\n");
	if(a==b||b==c)
	printf("Isosceles triangle\n");
	if(a==b&&b==c)
	printf("Equilateral triangle\n");
	return 0;
}
