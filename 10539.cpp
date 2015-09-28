#include<stdio.h>
#include<math.h>
#define L 1000000
bool ps[L];
long long dp[80070];
long long i,b,d,c,j,f,k,n,cnt,a;
void prime_seive(void)
{
	k=1;ps[0]=ps[1]=1;
	for(i=2;i<=sqrt(L);i+=1)
	{
		if(ps[i]==0)
		{
			for(j=i*i;j<=(L);j+=i)
				ps[j]=1;
		}
	}

}
void pre(void)
{
	 c=0;
	long long m,l;
		for(m=2;m<=1000000;m++)
		{
			if(ps[m]==0)
			{
				for(l=m*m;l<=1000000000000;l*=m)
				{
					dp[c++]=l;

				}

			}
		}
}
int main()
{
	prime_seive();
	pre();
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld %lld",&a,&b);
		cnt=0;
		for(i=0;i<80070;i++)
		{
			if(dp[i]>=a&&dp[i]<=b)
				cnt++;
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
