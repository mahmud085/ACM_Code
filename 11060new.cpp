#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<stdlib.h>
#include<string>
#include<vector>
#define mx 105
using namespace std;
char arr[51],ar2[51],ar3[51];
int a,b,c,d,i,j,n,k,visit[mx];
int ans[mx],adjucent[mx][mx],indegree[mx];
map<string,int>mp;
map<int,string>mp2;
int main()
{
	int cse=1;
	//FILE *f;
	//f=fopen("input.txt","w");
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		for(i=0;i<=n;i++)
		{
			visit[i]=0;
			ans[i]=0;
			indegree[i]=0;
		}
		for(i=1;i<=n;i++)
		{
			gets(arr);
			mp[arr]=i;
			mp2[i]=arr;
		}
		scanf("%d",&a);
		for(i=1;i<=a;i++)
		{
			scanf("%s %s",ar2,ar3);
			b=mp[ar2];
			c=mp[ar3];
			if(adjucent[b][c]==0)indegree[c]++;
			adjucent[b][c]=1;
			
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(visit[j]==0&&indegree[j]==0)
				{
					visit[j]=1;
					ans[i]=j;
					for(k=1;k<=n;k++)
						if(visit[k]==0&&adjucent[j][k]==1)
							--indegree[k];
						break;
					
				}
			}
		}
		string s;
		printf("Case #%d: Dilbert should drink beverages in this order: ",cse++);
		int flag=0;
		for(i=1;i<=n;i++)
		{
			s=mp2[ans[i]];
			if(flag==1)
			cout<<" "<<s;
			else
				cout<<s;
			flag=1;
		}
		printf(".\n\n");
		mp.clear();
		mp2.clear();
		memset(adjucent,0,sizeof(adjucent));
	}
	return 0;
}