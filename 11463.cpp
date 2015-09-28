#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<ctype.h>
#include<cmath>
#include<stdlib.h>
#include<limits>
using namespace std;
#define len 1005
int a,b,c,d,t,i,j,k,l,n,m,s,sam[len][len];
int main()
{
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&n,&m);
		for(k=0;k<n;k++)
		{
			for(j=0;j<=k;j++)
				sam[k][j]=sam[j][k]=len;
		}
		for(j=0;j<n;j++)
				sam[j][j]=0;
		for(j=0;j<m;j++)
		{
			scanf("%d %d",&a,&b);
			sam[a][b]=sam[b][a]=1;
		}
		scanf("%d %d",&c,&d);
		for(k=0;k<n;k++)
		{
			for(l=0;l<n;l++)
			{
				for(j=0;j<n;j++)
				{
					if(sam[l][j]>sam[l][k]+sam[k][j])
					sam[l][j]=(sam[l][k]+sam[k][j]);
				}
			}
		}
		int Min=0;
		//Min=sam[c][0]+sam[0][d];
		for(j=0;j<n;j++)
		{
			if(Min<sam[c][j]+sam[j][d])
				Min=sam[c][j]+sam[j][d];
		}
		printf("Case %d: %d\n",i,Min);
	}
	return 0;
}
