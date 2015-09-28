#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
char array[101][101];
long status[101][101];

int main()
{
	long a,b,c=1,d,e,f,i,j,k,l,m,n,s;
	while(scanf("%ld %ld",&a,&b),a!=0&&b!=0)
	{
		if(c>1)
			printf("\n");
		for(i=0;i<a;i++)
			scanf("%s",array[i]);
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				if(array[i][j]=='*')
				{
					status[i][j]=32;
					status[i-1][j-1]+=1;
					status[i-1][j]+=1;
					status[i-1][j+1]+=1;
					status[i][j-1]+=1;
					status[i][j+1]+=1;
					status[i+1][j-1]+=1;
					status[i+1][j]+=1;
					status[i+1][j+1]+=1;
				}
			}
		}
		printf("Field #%ld:\n",c);
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				if(status[i][j]>=32&&array[i][j]=='*')
					printf("*");
				else
					printf("%ld",status[i][j]);
			}
			printf("\n");
		}
		c++;
		memset(status,0,sizeof(status));
		memset(array,'0',sizeof(array));
	}


return 0;
}