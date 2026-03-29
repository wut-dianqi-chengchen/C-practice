#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int a=0;
	int b=0;
	printf("我已经想好了1~100的数了\n");
	printf("请你猜猜数字\n"); 
	do
	{
		scanf("%d",&b);
		if(b>number)
		printf("你输入的数大了\n");
		else if(b<number)
		printf("你输入的数小了\n");
		a++;
	}while(b!=number);
	printf("恭喜你只花了%d次就猜出来了",a);
	return 0;
}
