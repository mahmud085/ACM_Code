#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;
int x[101],y[101],a[101][101],b[101][101],c,d,i,j,k,l,n;
int main()
{
	 k=1;
	while(scanf("%d %d",&c,&d))
	{
		if(c==0&&d==0)
			break;
		for(i=0;i<c;i++)
			a[i][0]=0;
		for(i=1;i<d;i++)
			a[0][i]=0;
		for(i=1;i<=c;i++)
			scanf("%d",&x[i]);
		for(i=1;i<=d;i++)
			scanf("%d",&y[i]);
		for(i=1;i<=c;i++)
		{
			for(j=1;j<=d;j++)
			{
				if(x[i]==y[j])
				{
					a[i][j]=a[i-1][j-1]+1;
					b[i][j]=1;
				}
				else if(a[i-1][j]>=a[i][j-1])
				{
					a[i][j]=a[i-1][j];
					b[i][j]=2;
				}
				else
				{
					a[i][j]=a[i][j-1];
					b[i][j]=3;
				}
			}
		}
		printf("Twin Towers #%d\nNumber of Tiles : %d\n\n",k,a[c][d]);
		k++;



	}



return 0;
}