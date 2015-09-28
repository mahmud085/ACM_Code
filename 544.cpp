#include<cstdio>
#include<map>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
char a[31],b[31];
int u,v,w,visited[210],d[210],weight[210][210];
map<string,int>mp;
int main()
{
	int i,j,c,f,e,k=1,node,edge;
	int current,totalvisited,mincost;
	//printf("Enter number of node and edge: ");
	while(scanf("%d %d",&node,&edge),node!=0&&edge!=0)
	{
		getchar();
		c=1;
	for(i=1;i<=edge;i++)
	{
		
		scanf("%s %s %d",a,b,&w);
		if(mp[a]==0)
			mp[a]=c++;
		if(mp[b]==0)
			mp[b]=c++;
		
		f=mp[a];
		e=mp[b];
		weight[f][e]=weight[e][f]=w;
	}
	for(i=1;i<=node;i++)
		d[i]=0;
	int cur,des;
	scanf("%s %s",a,b);
	cur=mp[a];
	des=mp[b];
	current=cur;
	visited[current]=1;
	while(current!=des)
	{
		for(i=1;i<=node;i++)
		{
			if(visited[i]==0&&weight[current][i]!=0)
			{
				if(d[i]<weight[current][i])
					d[i]=weight[current][i];
			}
		}
	mincost=0;
	for(i=1;i<=node;i++)
	{
		if(visited[i]==0){
		if(d[i]>mincost)
		{
			mincost=d[i];
			current=i;
		}}
	}
	visited[current]=1;
	}
	mincost=999999;
	for(i=1;i<=node;i++)
	{
		if(visited[i]==1&&d[i]!=0)
		{
			if(d[i]<mincost)
				mincost=d[i];
		}
	}
	printf("Scenario #%d\n%d tons\n\n",k,mincost);
	memset(visited,0,sizeof(visited));
	k++;
	}
return 0;
}