#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int link[200001],rank[200001];
struct t
{
	long u,w,v;
}st[200001],p;
long parent(long z)
{
	if(z==link[z])
		return link[z];
	else
		link[z]=parent(link[z]);
}
void linked(long c,long d)
{
	if(rank[c]>rank[d])
		link[d]=c;
	else
	{
		link[c]=d;
		if(rank[c]==rank[d])
			rank[d]++;
	}
}
bool com(t x,t y)
{
	if(x.w<y.w)
		return true;
	return false;
}
int main()
{
	long a,b,t,s,x,y,edge,node,i,j,k,n;
	while(scanf("%ld %ld",&node,&edge),node!=0&&edge!=0)
	{
		t=0;
		for(i=0;i<edge;i++)
		{
			scanf("%ld %ld %ld",&st[i].u,&st[i].v,&st[i].w);
			t+=st[i].w;
		}
		sort(st,st+edge,com);
		s=0;
		for(i=1;i<=node;i++)
		{
			link[i]=i;
			rank[i]=0;
		}
		for(i=0;i<edge;i++)
		{
			x=parent(st[i].u);
			y=parent(st[i].v);
			if(x!=y)
			{
				linked(x,y);
				s+=st[i].w;
				//printf("%ld %ld\n",st[i].u,st[i].v);
			}
		}
		printf("%ld\n",t-s);
		memset(link,0,sizeof(link));
		memset(rank,0,sizeof(rank));

	}
return 0;
}
