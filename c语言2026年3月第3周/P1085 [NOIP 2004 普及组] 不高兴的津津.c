#include <stdio.h>
int main()
{
	int q,w,e,r,t,y,u,i,o,p,a,s,d,f;
	scanf("%d %d",&q,&w);
	scanf("%d %d",&e,&r);
	scanf("%d %d",&t,&y);
	scanf("%d %d",&u,&i);
	scanf("%d %d",&o,&p);
	scanf("%d %d",&a,&s);
	scanf("%d %d",&d,&f);
	int Q=q+w;
	int E=e+r;
	int T=t+y;
	int U=u+i;
	int O=o+p;
	int A=a+s;
	int D=d+f;
	int M;
	int z,x,c,v,b,n,j;
	z=Q;
	x=E;
	c=T;
	v=U;
	b=O;
	n=A;
	j=D;
	if(Q<E)
	{
		M=E;
		E=Q;
		Q=M;
	}
	if(Q<T)
	{
		M=T;
		T=Q;
		Q=M;
	}
	if(Q<U)
	{
		M=U;
		U=Q;
		Q=M;
	}
	if(Q<O)
	{
		M=O;
		O=Q;
		Q=M;
	}
	if(Q<A)
	{
		M=A;
		A=Q;
		Q=M;
	}
	if(Q<D)
	{
		M=D;
		D=Q;
		Q=M;
	}
	if(Q<=8)
	{
		printf("0");
		return 0;
	}
	if(z==Q)
	{
		printf("1");
		return 0;
	}
	if(x==Q)
	{
		printf("2");
		return 0;
	}
	if(c==Q)
	{
		printf("3");
		return 0;
	}
	if(v==Q)
	{
		printf("4");
		return 0;
	}
	if(b==Q)
	{
		printf("5");
		return 0;
	}
	if(n==Q)
	{
		printf("6");
		return 0;
	}
	if(j==Q)
	{
		printf("7");
		return 0;
	}
	return 0;
} 
