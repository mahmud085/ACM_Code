#include<cstdio>
#define L 10010
int dp[L],dp2[L];
bool ps[L];
int prime[L];
int a,b,c,d,e,f,i,j,k,l,m,n;
int prime_seive(void)
{
	k=1;ps[0]=ps[1]=1;
	for(i=4;i<L;i+=2)
		ps[i]=1;
	prime[0]=2;
	for(i=3;i<(L);i+=2)
	{
		if(ps[i]==0)
		{
			prime[k++]=i;
			for(j=i*i;j<(L);j+=i+i)
				ps[j]=1;
		}
	}
return k;
}
void pre(void)
{
		for(i=2;i<=L;i++)
	{
		int cnt=0;
		for(l=0;prime[l]<=(i)/2;l++)
		{ int sum=0;
			for(m=l;sum<i;m++)
			{
				sum+=prime[m];
				
			}
				if(sum==i)
				cnt++;
		}
		if(ps[i]==0)
			cnt++;
		dp[i]=cnt;
	}
}
int main()
{
	prime_seive();
	pre();

	while(scanf("%d",&a),a!=0)
	{
		
		printf("%d\n",dp[a]);
	}
	return 0;
}