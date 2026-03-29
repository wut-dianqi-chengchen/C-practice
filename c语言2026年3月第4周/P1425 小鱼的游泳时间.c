#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int m=a*60+b;
	int n=c*60+d;
	int diff=n-m;
	int f=diff%60;
	int e=(diff-f)/60;
	printf("%d %d",e,f);
	return 0;
} 
