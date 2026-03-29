//给定一个十进制正整数 n，写下从 1 到 n 的所有整数，然后数一下其中出现的数字 1 的个数。
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	int j;
	int k;
	int times=0;
	while(i<=n)
	{
		j=i;
		while(j>0)
		{
			k=j%10;
			j=j/10;
			if(k==1)
			times++;
		}
		i++;
	} 
	printf("%d",times);
	return 0;
} 
