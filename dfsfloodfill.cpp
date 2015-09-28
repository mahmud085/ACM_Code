#include<cstdio>
#include<cstring>
#include<string>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
char arr[100][100];
void dfs(int x,int y)
{
	int i;
	arr[x][y]='@';
	for(i=0;i<8;i++)
	{
		if(arr[x+dx[i]][y+dy[i]]=='1')
			dfs(x+dx[i],y+dy[i]);
	}
}
int main()
{
	
	int a,i,j,n=1,cnt,b;
	while(scanf("%d",&a)!=EOF)
	{
		getchar();
		cnt=0;
		for(i=0;i<a;i++)
		{
			scanf("%s",arr[i]);
		}
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(arr[i][j]=='1')
				{
					cnt++;
					dfs(i,j);
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",n,cnt);
		n++;
	}
return 0;

}