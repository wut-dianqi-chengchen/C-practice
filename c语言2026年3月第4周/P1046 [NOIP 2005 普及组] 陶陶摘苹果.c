#include <stdio.h>
int sum=0;
int max;
void gs(int a)
{
	if(a<=max+30)
	sum++;
}
int main()
{
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
	scanf("%d",&max);
	gs(a1);
	gs(a2);
	gs(a3);
	gs(a4);
	gs(a5);
	gs(a6);
	gs(a7);
	gs(a8);
	gs(a9);
	gs(a10);
	printf("%d",sum);
	return 0;
}
