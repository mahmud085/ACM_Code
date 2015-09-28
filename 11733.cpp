#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
long link[100001],rank[100001];
struct l
{
	long u,v,w;
}st[100001];
void pre()
{
	long k;
	for( k=0;k<=100001;k++)
	{
		link[k]=k;
	rank[k]=0;
	}
}
bool cmp(l o,l p)
{
	if(o.w<p.w)
		return true;
	return false;
}
long parentof(long z)
{
	if(z==link[z])
		return z;
	return link[z]=parentof(link[z]);
}
void linked(long c,long d)
{
	if(rank[c]<rank[d])
		link[c]=d;
	else
	{
		link[d]=c;
		if(rank[c]==rank[d])
			rank[d]++;
	}
}
int main()
{
	long a,b,c,cost,d,e,f,g,i,j,k,t,s,x,y,node,edge;
	scanf("%ld",&t);
	for(j=1;j<=t;j++)
	{
		scanf("%ld %ld %ld",&node,&edge,&cost);
		pre();
		for(i=0;i<edge;i++)
		{
			scanf("%ld %ld %ld",&st[i].u,&st[i].v,&st[i].w);
		}
		sort(st,st+edge,cmp);
		s=0;e=0;g=0;
		for(i=0;i<edge;i++)
		{
			x=parentof(st[i].u);
			y=parentof(st[i].v);
			if(x!=y)
			{
				e++;
				linked(x,y);
				if(st[i].w>=cost)
				{
					g++;
				}
				else
				{
				s=s+st[i].w;
				}
			}
		}
		f=node-e+g;
		d=f*cost+s;
		printf("Case %ld: %ld %ld\n",j,d,f);
	}

return 0;
}
