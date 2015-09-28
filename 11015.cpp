#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
#define Min 1000000
char arr[25][12];
int sam[25][25];
int main()
{
	int a,b,c,d,cs=1,i,j,k,n,m,w;
	while(scanf("%d",&m),m!=0)
	{
		scanf("%d",&n);
		getchar();
		
		for(i=1;i<=m;i++)
			for(j=1;j<=i;j++)
				sam[i][j]=sam[j][i]=Min;
			for(j=1;j<=m;j++)
				sam[j][j]=0;
		for(i=1;i<=m;i++)
			scanf("%s",arr[i]);
		for(j=1;j<=n;j++)
		{
			scanf("%d %d %d",&a,&b,&w);
			sam[a][b]=sam[b][a]=w;
		}
		for(k=1;k<=m;k++)
		{
			for(i=1;i<=m;i++)
			{
				for(j=1;j<=m;j++)
				{
					if(sam[i][j]>sam[i][k]+sam[k][j])
						sam[i][j]=sam[i][k]+sam[k][j];
				}
			}
		}
		int sum=0;
		int mc = 2147483647,mn = 1;
		for(i=1;i<=m;i++)
		{
			
			sum=0;
			for(j=1;j<=m;j++)
			{
				//if(sam[i][j]<Min)
				sum+=sam[i][j];
			}
				if(sum<mc&&sum>0)
				{
					mc=sum;
					mn=i;
				}
		}
		printf("Case #%d : %s\n",cs++,arr[mn]);
		memset(sam,0,sizeof(sam));
	}
	return 0;
}