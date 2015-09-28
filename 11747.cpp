#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
long link[10100],rank[10100],name[10010];
struct t
{
	long u,w,v;
}st[1010],p;
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
	for(int i=0;i<=1000;i++)
	{
		link[i]=i;
		rank[i]=0;
	}
}
int main()
{
	long a,b,t,s,x,y,edge,node,r,i,j,k,n;
	while(scanf("%ld %ld",&node,&edge),node!=0&&edge!=0)
	{
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
				//s--;
			//	printf("%ld %ld\n",st[i].u,st[i].v);
			}
			else
			{
				s++;
				name[r++]=st[i].w;
			}
			
		}
		sort(name,name+r);
		if(s==0)
			printf("forest\n");
		else
		{
		for(i=0;i<r;i++)
		{
			printf("%ld",name[i]);
			if(i!=r-1)
			printf(" ");
		}
		printf("\n");
		}
	
	}
return 0;
}
