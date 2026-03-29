#include <stdio.h>
int main()
{
	int number,sum=0,count=0;
	scanf("%d",&number);
	while(number!=-1)
	{
		sum+=number;
		count++;
		scanf("%d",&number);
	}
	printf("%.1f\n",1.0*sum/count);
	return 0;
}
