#include <stdio.h>
int main()
{
	double m,h;
	scanf("%lf %lf",&m,&h);
	if(m/(h*h)<18.5)
	printf("Underweight");
	else if(m/(h*h)>=18.5&&m/(h*h)<24)
	printf("Normal");
	else if(m/(h*h)>=24)
	{
		printf("%.6g\n",m/(h*h));
		printf("Overweight");
	}
	return 0;
}
