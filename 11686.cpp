#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#define N 100010
using namespace std;

vector<long>vec[N],ans;
long visit[N];
long u,k;
int cycle;
void dfs(long u)
{
	long v;
	visit[u]=1;
	for(k=0;k<vec[u].size();k++)
	{
		v=vec[u][k];
		if(visit[v]==0)
			dfs(vec[u][k]);
		else if(visit[u]==1)
		cycle=1;
	}
	visit[u]=2;
	ans.push_back(u);
}
int main()
{
	long a,b,i,j,n,m;
	while(scanf("%ld %ld",&n,&m),n!=0&&m!=0)
	{
		memset(visit,0,sizeof(visit));
		for(i=0;i<m;i++)
		{
			scanf("%ld %ld",&a,&b);
			vec[a].push_back(b);
		}
		cycle=0;
		for(i=1;i<=n;i++)
		{
			if(visit[i]==0)
			dfs(i);
		}
		if(cycle==1)
			printf("IMPOSSIBLE\n");
		else{
		for(j=ans.size()-1;j>=0;j--)
			printf("%ld\n",ans[j]);
		}
		ans.clear();
		for(i=0;i<N;i++) 
			vec[i].clear();	
	}
return 0;
}
