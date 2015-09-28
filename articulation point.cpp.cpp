#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define min(a,b) a<b?a:b;
/*#define
*/
vector < int > Graph[100000];
int visit[100000];
int dis[100000], baack[100000];
int timer;
int component;
int root, degreeOfRoot;

void findArt(int u)
{
    visit[u] = 1;
    timer++;
    baack[u]=dis[u]=timer;
    for(int i=0; i<Graph[u].size(); i++)
    {
        int v = Graph[u][i];
        if(!visit[v])
        {
            findArt(v);
            if(u==root) degreeOfRoot++;
            if(degreeOfRoot>=2) cout << u << " ";

            baack[u] = min(baack[u], baack[v]);
            if(baack[v]>=dis[u] && u!=root) cout << "u= "<<u << " ";
        }
        else
        baack[u] = min(baack[u], dis[v]);
    }
}

int main()
{
    int i, j, k;
    int n, u, v;

    //init(n);
    cin >> n;

    while(cin>>u>>v)
    {
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }


    root = 1;
    findArt(root);
    cout << endl;
    //for(i=1; i<=n; i++) cout << baack[i] << " ";

    return 0;
}
/*
9
1 2
1 5
1 4
2 3
3 4
4 5
4 6
4 9
6 9
6 7
6 8
7 8
8 9
*/

