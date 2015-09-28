#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
char x[500],y[500];
int c[501][501],b[500][500];
int main()
{

	int i,j,l,m,n,k=1;
	

	while( gets(x)&&gets(y)!=NULL)
 
	{
	if(strcmp(x,"#")==0)
		break;
		m=strlen(x);
		n=strlen(y);
		for(i=0;i<=m;++i)
			c[i][0]=0;
		for(j=0;j<=n;++j)
			c[0][j]=0;
		for(i=1;i<=m;++i)
		{
			for(j=1;j<=n;++j)
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
		printf("Case #%d: you can visit at most %d cities.\n",k,c[m][n]);
		k++;
	}

return 0;
}