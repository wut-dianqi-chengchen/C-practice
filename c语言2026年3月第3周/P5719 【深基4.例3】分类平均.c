#include <stdio.h>
int main()
{
	int n,k;
	int i=1;
	int A=0;
	int B=0;
	int m=0;
	int l=0;
	scanf("%d %d",&n,&k);
	while(i<=n)
	{
		if(i%k==0)
		{
			A+=i;
			m++;
		}
		else
		{
			B+=i;
			l++;
		}
		i++;
	}
	if(m!=0&&l!=0)
	printf("%.1f %.1f",(A*1.0)/(m*1.0),(B*1.0)/(l*1.0));
	else if(m==0)
	printf("%.1f %.1f",0,(B*1.0)/(l*1.0));
	else if(l==0)
	printf("%.1f %.1f",(A*1.0)/(m*1.0),0);
	return 0;
}
