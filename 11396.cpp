#include <cstdio>
#include <vector>
#include <queue>
#include<cstring>
using namespace std;

#define MAX 310

int n, e,cnt;
int sam[MAX], visited[MAX],num[MAX];
vector< int > G[MAX];
void reset()
{
	
	memset(sam,0,sizeof(sam));
	memset(num,0,sizeof(num));
	memset(visited,0,sizeof(visited));
}
bool is_bipartite()
{
	 //cnt++;
    int i, u, v;
    queue< int > Q;
int   start = 1; // nodes labeled from 1
    Q.push(start);
    sam[start] = 1;
	num[sam[start]]++;// 1 left, 2 right
    visited[start] = 1; // set gray

    while(!Q.empty())
    {
        u = Q.front(); Q.pop();
        for(i=0; i < G[u].size(); i++)
        {
            v = G[u][i];
            if(sam[u] == sam[v]) return false;
            if(visited[v] == 0)
            {
                visited[v] = 1;
                sam[v] = 3 - sam[u]; // alter 1 and 2
                num[sam[v]]++;
				Q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    int i,c, u, v,t;
    while(scanf("%d",&n),n!=0)
	{
		cnt=0;reset();
		//scanf("%d %d",&n,&e);
       while( scanf("%d %d", &u, &v),u!=0&&v!=0)
	   {
			G[u].push_back(v);
			G[v].push_back(u);
		}
	
	
		if(is_bipartite())
			printf("YES\n");
		else
			printf("NO\n");
	for(int k=0;k<205;k++)
		G[k].clear();
	}
    return 0;
}
