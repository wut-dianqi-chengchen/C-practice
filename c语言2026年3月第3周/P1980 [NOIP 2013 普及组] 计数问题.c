#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int i=1;
	int j=0;
	int k=0;
	int times=0;
	for(;i<=n;i++)//依次循环每个整数 
	{
		j=i;//备份原数，避免破坏循环变量 
		while(j>0)
		{
			k=j%10;//取j个位 例如 158%10=8 
			j=j/10;//去掉个位 例如 158/10=15
			if(x==k)//进行比较 
			times++;//记录数据 
		}
	}
	printf("%d",times);
	return 0;
}
