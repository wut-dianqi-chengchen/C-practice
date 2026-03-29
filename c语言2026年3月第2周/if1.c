#include <stdio.h>
int main()
{
	float a=0;
	float b=0;
	printf("请输入票面:");
	scanf("%f",&a);
	printf("请输入金额:");
	scanf("%f",&b);
	if(b>a)
	{
		printf("找你%.2f元",b-a);
	 } 
	 else{
	 	printf("你钱不够");
	 }
	 return 0;
}
