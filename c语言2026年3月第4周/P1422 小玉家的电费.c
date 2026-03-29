#include <stdio.h>
int main()
{
	int usage;
	scanf("%d",&usage);
	double money;
	if(usage<=150)
	money=usage*0.4463;
	else if(usage>150&&usage<=400)
	money=150*0.4463+(usage-150)*0.4663;
	else if(usage>400)
	money=150*0.4463+250*0.4663+(usage-400)*0.5663;
	printf("%.1lf",money);
	return 0;
} 
