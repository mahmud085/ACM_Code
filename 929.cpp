#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
#define M 1001
#define MAXINT 2147483640
int xx[]={0,-1,0,1};
int yy[]={-1,0,1,0};
int arr[M][M],vis[M][M],dis[M][M];
using namespace std;
struct data
{
	int des,x,y;
	bool operator<(const data &p)const
	{
		return des >p.des;
	}
};
int dijk(int n,int m)
{
	priority_queue < data >q;
    struct data tmp;
    int i,j,x,y,tx,ty,tc;
   
    for(i=0;i<M;i++)
        for(j=0;j<M;j++)
            dis[i][j] = MAXINT,vis[i][j]=0;
		dis[1][1]=arr[1][1];
		tmp.des=0;
		tmp.x=tmp.y=1;
		q.push(tmp);
		while(!q.empty())
		{
			tmp=q.top();q.pop();
			x=tmp.x;
			y=tmp.y;
			vis[x][y]=1;
			for(i=0;i<4;i++)
			{
				tx = x + xx[i];
				ty = y + yy[i];

				if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&vis[tx][ty]==0)
				{
					tc = dis[x][y] + arr[tx][ty];
					if (tc < dis[tx][ty])
					{
						dis[tx][ty] = tc;
						tmp.x = tx;tmp.y = ty;
						tmp.des = dis[tx][ty];
						q.push(tmp);
					}
				}
			}
		}
return dis[n][m];
}


int main()
{
	int a,b,c,d,i,j,k,t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				scanf("%d",&arr[i][j]);
			}
		}
		c=dijk(n,m);
		printf("%d\n",c);
	}
	return 0;
}
