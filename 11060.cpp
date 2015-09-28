#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<stdlib.h>
#include<string>
#include<vector>
#define mx 205
using namespace std;
char arr[51],ar2[51],ar3[51];
int a,b,c,d,i,j,n,visit[mx];
vector<int>vec[mx],ans;
map<string,int>mp;
map<int,string>mp2;
void dfs(int u)
{
	int v,k;
	
	if(visit[u]==0)
	{
		for(k=0;k<vec[u].size();k++)
		{
			v=vec[u][k];
			dfs(v);
		}
	cout<<"u= "<<u;
		ans.push_back(u);
		visit[u]=1;
	}
}
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
			vec[i].clear();
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
			b=mp[ar2];c=mp[ar3];
			vec[c].push_back(b);
		}
		for(i=1;i<=n;i++)
		{
			if(visit[i]==0)
				dfs(i);
		}
		int flag=0;
		printf("Case #%d: Dilbert should drink beverages in this order: ",cse++);
		string s;
		int e;
		d=ans.size();
		for(j=0;j<d;j++)
		{
			e=ans[j];
			s=mp2[e];
			if(flag==0)
			{
				cout<<s;
				flag=1;
			}
			else
				cout<<" "<<s;
		}
		printf(".\n\n");
		ans.clear();
		mp.clear();
		mp2.clear();
		//memset(visit,0,sizeof(visit));
	}
	return 0;
}