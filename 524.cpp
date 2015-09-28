#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int res[40];
int tak[20];
int prime[40],f=0;
void call(int n,int a)
{
	int i,j;
	if(a==n)
	{
		if(prime[res[a-1]+1]==-1)
		{
			printf("%d",res[0]);
			for(i=1;i<a;i++)
			printf(" %d",res[i]);
			puts("");
		}
		return;
	}
	for(j=2;j<=a;j++)
	{
		//if(j==a)
		//	return;
		if(tak[j]==0)
		{
			if(prime[res[n-1]+j]==-1)
			{
				//printf("dhukche %d %d %d\n",n,res[n-1],j);
				tak[j]=1;
				res[n]=j;
				call(n+1,a);
				tak[j]=0;
			}
		}
	}
}

int main()
{
	prime[2]=-1;prime[3]=-1;prime[5]=-1;prime[7]=-1;prime[11]=-1;prime[13]=-1;prime[17]=-1;prime[19]=-1;prime[23]=-1;
	prime[29]=-1;prime[31]=-1;

	int a,b,c=0,d,i,j,k=1;
	while(scanf("%d",&a)!=EOF)
	{	
		if(c)
		printf("\n");
		printf("Case %d:\n",k++);
		res[0]=1;
		call(1,a);
		c=1;
	}
	return 0;
}