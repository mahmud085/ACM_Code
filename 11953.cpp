#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;
char arr[103][103];
int xx[]={-1, -1, 0, 1, 1, 1, 0, -1};
int yy[]={0, 1, 1, 1, 0, -1, -1, -1};
int n;
void dfs(int x,int y)
{
	int j;
	if(x<0||x==n||y<0||y==n||arr[x][y]=='.')return;
	arr[x][y]='.';
	for(j=0;j<8;j+=2)
		dfs(x+xx[j],y+yy[j]);
}
int main()
{
	int t,i,j,k;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%s",arr[i]);
		int sum=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr[i][j]=='x')
				{
					sum++;
					dfs(i,j);
				}
			}
		}
		printf("Case %d: %d\n",k,sum);
	}
	return 0;
}
