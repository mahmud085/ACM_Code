#include <cstdio>
#include <vector>
#include <queue>
#include<cstring>
using namespace std;

#define MAX 210
int n, e,cnt,f,tot;
int sam[MAX], visited[MAX];
vector< int > G[MAX];
void reset()
{
	
	//memset(sts,0,sizeof(sts));
	memset(sam,0,sizeof(sam));
	memset(visited,0,sizeof(visited));
}
int max(int x,int y)
{
	if(x>y)return y;
	else
		return x;
}
int is_bipartite(int start)
{
	 
    int i, u, v;
    queue< int > Q;
    //start = 0; 
    Q.push(start);
    sam[start] = 1;
    visited[start] = 1; 
int ct=0;int num=0;
    while(!Q.empty())
    {
        u = Q.front(); Q.pop();
		//if(G[u].size()==0)
		num++;
		if(sam[u]==1)
			ct++;
	
        for(i=0; i < G[u].size(); i++)
        {
            v = G[u][i];
            if(sam[u] == sam[v]) return -1;
            if(visited[v] == 0)
            {
                visited[v] = 1;
                sam[v] = 3 - sam[u]; 
				Q.push(v);
            }
        }
    }
	if(num==1)
		return 1;
	return max(ct,num-ct);
}


int main()
{
    int i,c,d, u, v,t;
	scanf("%d",&t);
    while(t--)
	{
		cnt=0;
		reset();
		scanf("%d %d",&n,&e);
    for(i=0; i<e; i++)
    {
        scanf("%d %d", &u, &v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
	for(i=0;i<n;i++)
	{
		if(visited[i]==0)
		{c=is_bipartite(i);cnt+=c;}
		if(c==-1)
			break;	
		
	}
	if(c!=-1)
	printf("%d\n",cnt);
	else printf("-1\n");
	for(int k=0;k<205;k++)
		G[k].clear();
	}
    return 0;
}
