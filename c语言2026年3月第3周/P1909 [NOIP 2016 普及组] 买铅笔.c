/*P 老师需要去商店买 n 支铅笔作为小朋友们参加 NOIP 的礼物。
她发现商店一共有 3 种包装的铅笔，不同包装内的铅笔数量有可能不同，价格也有可能不同。
为了公平起见，P 老师决定只买同一种包装的铅笔。

商店不允许将铅笔的包装拆开，因此 P 老师可能需要购买超过 n 支铅笔才够给小朋友们发礼物。

现在 P 老师想知道，在商店每种包装的数量都足够的情况下，要买够至少 n 支铅笔最少需要花费多少钱。*/
#include <stdio.h>
int main()
{
	int n;
	int q,w;
	int e,r;
	int t,y;
	scanf("%d",&n);
	scanf("%d %d",&q,&w);
	scanf("%d %d",&e,&r);
	scanf("%d %d",&t,&y);
	int Q,W;
	Q=q;
	W=w;
	int E,R;
	E=e;
	R=r;
	int T,Y;
	T=t;
	Y=y;
	while(n>q)
	{
		q+=Q;
		w+=W;
	}
	while(n>e)
	{
		e+=E;
		r+=R;
	}
	while(n>t)
	{
		t+=T;
		y+=Y;
	}
	int o;
	if(w>r)
	{
		o=r;
		r=w;
		w=o;
	}
	if(w>y)
	{
		o=y;
		y=w;
		w=o;
	}
	printf("%d",w);
	return 0;
} 
