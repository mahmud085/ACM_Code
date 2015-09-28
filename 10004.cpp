#include <cstdio>
#include <vector>
#include<cstring>
#include <queue>
using namespace std;

#define MAX 210

int n, e;
int sam[MAX], visited[MAX];
vector< int > G[MAX];
void reset()
{
	
	memset(sam,0,sizeof(sam));
	memset(visited,0,sizeof(visited));
}
bool is_bipartite()
{reset();
    int i, u, v, start;
    queue< int > Q;
    start = 0; // nodes labeled from 1
    Q.push(start);
    sam[start] = 1; // 1 left, 2 right
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
                Q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    int i, u, v;
    while(scanf("%d",&n),n!=0)
	{
		scanf("%d",&e);
    for(i=0; i<e; i++)
    {
        scanf("%d %d", &u, &v);
		G[u].push_back(v);
        G[v].push_back(u);
    }
    if(is_bipartite()) printf("BICOLORABLE.\n");
    else printf("NOT BICOLORABLE.\n");
	for(int k=0;k<205;k++)
		G[k].clear();
	}
    return 0;
}
