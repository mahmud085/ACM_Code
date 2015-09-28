#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define l 1048577
bool prime[l],comprime[l];
long a,b,c,d,f,i,j,k,n;
void seive(void)
{
for(i=4;i<l;i+=2)
		prime[i]=1;
	for(i=3;i<(l);i++)
	{
		if(prime[i]==0)
		{
			for(j=i*i;j<(l)&&j>0;j+=2*i)
				prime[j]=1;
		}
	}
}
void pre(void)
{
	long i,j;
	for(i=4;i<=1048577;i++)
	{
		if(prime[i]==1)
		{f=0;
			for(j=i*2;j<=l;j+=i)
			{
				if(prime[j]==1)
				{
					prime[j]=0;
					
				}
			}
		
		
		}
		
	}
	
}
int main()
{
	seive();
	pre();
	while(scanf("%ld",&n)!=EOF)
	{
		long cnt=0;
		for(i=1;i<=n;i++)
		{
			scanf("%ld",&a);
			if(prime[a]==1)
				cnt++;
		}
		printf("%ld\n",cnt);
	}
	return 0;
}