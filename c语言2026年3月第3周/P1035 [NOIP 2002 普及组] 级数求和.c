#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	int n=0;
	int i=1;
	double Sn=0;
	while(Sn<=k)
	{
		Sn+=1.0/i;
		n++;
		i++; 
	}
	printf("%d",n);
	return 0;
}
