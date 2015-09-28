#include<stdio.h>
#define l 100000
long dp[100001];
long a,c,d,e,i,j,k,n;
void seive(void)
{
	dp[1]=dp[2]=1;
	for(i=2;i<=l;i++)
	{
		long cnt=0;
		for(k=2;k<=i;k++)
		{
			if(dp[k]==0)
			{
				cnt=0;
				for(j=2;j*j<=k;j++)
				{
					while(k%j==0)
					{
						k=k/j;
						cnt++;
					}
				}
				if(j!=1)
					cnt++;
			}
			else
				cnt+=dp[k];
		}
		dp[i]=cnt;
	}
}

int main()
{
	seive();
	 while(scanf("%ld",&n)!=EOF)
	 {
		 c=dp[n];
		 printf("%ld\n",c);
	 }
	 return 0;
}