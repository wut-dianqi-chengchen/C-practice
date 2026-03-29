#include <stdio.h>
int main()
{
	int x,n;
	scanf("%d %d",&x,&n);
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		if(x!=6&&x!=7)
		sum++;
		x++;
		if(x==8)
		x=1; 
	}
	printf("%d",sum*250);
}
