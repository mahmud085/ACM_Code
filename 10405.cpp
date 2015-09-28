#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
char x[1001],y[1001];
long c[1000][1000],b[1000][1000],i,j,k,l,m,n;
int main()
{
	while(gets(x))
	{
		gets(y);
		m=strlen(x);
		n=strlen(y);
		for(i=1;i<m;i++)
			c[0][i]=0;
		for(i=0;i<n;i++)
			c[i][0]=0;
		for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(x[i-1]==y[j-1])
				{
					c[i][j]=c[i-1][j-1]+1;
					b[i][j]=1;
				}
				else if(c[i-1][j]>=c[i][j-1])
				{
					c[i][j]=c[i-1][j];
					b[i][j]=2;
				}
				else
				{
					c[i][j]=c[i][j-1];
					b[i][j]=3;
				}
			}
		}
		printf("%ld\n",c[m][n]);
	}





return 0;
}