#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
long cost[2010];
struct t
{
	long u,v,w;
}a[2010];
int main()
{
	long b,c,d,i,j,k,t,n,node,edge;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld %ld",&node,&edge);
	
		//cost[0]=0;
		for(i=0;i<node;i++)
			cost[i]=999999999;
		for(i=0;i<edge;i++)
			scanf("%ld %ld %ld",&a[i].u,&a[i].v,&a[i].w);
		cost[a[0].u]=0;
		for(i=0;i<node-1;i++)
		{
			for(j=0;j<edge;j++)
			{
				if(cost[a[j].v]>cost[a[j].u]+a[j].w)
					cost[a[j].v]=cost[a[j].u]+a[j].w;
			}
		}
		d=0;
		for(i=0;i<edge;i++)
		{
			if(cost[a[i].v]>cost[a[i].u]+a[i].w)
			{
				d=1;
				break;
			}
		}
		if(d==1)
			printf("possible\n");
		else
			printf("not possible\n");
	}
return 0;
}
