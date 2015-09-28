#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
char array[11][11],ar[11][11];
long status[11][11];

int main()
{
	long a,t,b,c=1,d,e,f,i,j,k,l,m,n,s;
	scanf("%ld",&n);
	for(t=1;t<=n;t++)
	{
		if(t>1)
			printf("\n");
	c=0;
		scanf("%ld",&a);
	getchar();
		for(i=0;i<a;i++)
			scanf("%s",array[i]);
		for(i=0;i<a;i++)
			scanf("%s",ar[i]);
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
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
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(ar[i][j]=='x'&&array[i][j]=='*')
				{
					c=1;
					break;
				}
			}
		}
		if(c==1)
		{
	
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				if(array[i][j]=='*')
					printf("*");
				else if(ar[i][j]=='x')
					printf("%ld",status[i][j]);
				else
					printf(".");
			}
			printf("\n");
		}
		}
		else
		{
	
		for(i=0;i<a;i++)
		{
			for(j=0;j<a;j++)
			{
				 if(ar[i][j]=='x')
					printf("%ld",status[i][j]);
				else
					printf(".");
			}
			printf("\n");
		}
		}
		
		memset(status,0,sizeof(status));
		memset(array,'0',sizeof(array));
		memset(ar,'0',sizeof(ar));
	}


return 0;
}