#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
long link[1000001],rank[1000001],name[1000001];
struct t
{
	long u,w,v;
}st[1000001],p;
long parent(long z)
{
	if(z==link[z])
		return link[z];
	else
		link[z]=parent(link[z]);
}
bool cmp(t x,t y)
{
	if(x.w<y.w)
		return true;
	return false;
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
void pre()
{
	for(int i=0;i<=1000000;i++)
	{
		link[i]=i;
		rank[i]=0;
	}
}
int main()
{
	long a,b,t,s,x,y,edge,node,r,i,j,k,n;
	while(scanf("%ld %ld",&node,&edge)!=EOF)
	{
		if(node==0&&edge==0)
			break;
		t=0;
		for(i=0;i<edge;i++)
		{
			scanf("%ld %ld %ld",&st[i].u,&st[i].v,&st[i].w);
		}
		pre();
		sort(st,st+edge,cmp);
		s=0;
		r=0;
		for(i=0;i<edge;i++)
		{
			x=parent(st[i].u);
			y=parent(st[i].v);
			if(x!=y)
			{
				linked(x,y);
				s++;
				if(st[i].w>r)
					r=st[i].w;
				//name[r++]=st[i].w;
			//	printf("%ld %ld\n",st[i].u,st[i].v);
			}
				//s++;
				
			
			
		}
		//sort(name,name+r);
		if(s<node-1)
			printf("IMPOSSIBLE\n");
		else
		{
	
			printf("%ld",r);
			printf("\n");
		}
	
	}
return 0;
}
