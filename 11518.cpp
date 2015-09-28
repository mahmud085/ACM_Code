#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
bool sts[10010];
vector<int >v[10000+10];
	queue<int >q;
void reset()
{
	int j;
	memset(sts,0,sizeof(sts));
	for( j=0;j<10010;j++)
		v[j].clear();
}
int main()
{
	
	int a,b,c,d,e,f,w,u,t,i,cnt;
	scanf("%d",&t);
	while(t--)
	{
		reset();
		cnt=0;
		scanf("%d %d %d",&a,&b,&c);
		for(i=0;i<b;i++)
		{
			scanf("%d %d",&d,&e);
			v[d].push_back(e);
		}
		for(i=0;i<c;i++)
		{
			scanf("%d",&f);
			q.push(f);
		}
		while(!q.empty())
		{
			u=q.front();
			sts[u]=1;
			q.pop();
			for(i=0;i<v[u].size();i++)
			{
				w=v[u][i];
				if(sts[w]==0)
				q.push(w);
				sts[w]=1;
				//cnt++;
			}
		}
		for(i=0;i<=a;i++)
			if(sts[i])
				cnt++;
		printf("%d\n",cnt);
	}
	return 0;
}
