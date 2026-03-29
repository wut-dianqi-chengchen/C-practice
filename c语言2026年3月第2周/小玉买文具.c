#include <stdio.h>
int main()
{
   int a=1*10+9;
   int b=0,c=0,e=0,f=0;
   printf("请输入你有多少元：");
   scanf("%d",&b);
   printf("请输入你有多少角：");
   scanf("%d",&c);
   e=10*b+c;
   f=e/a;
   printf("你一共可以买%d只",f);
   return 0; 
}    
