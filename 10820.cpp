#include<cstdio>
#define L 50000
int phi[L+2],prime[L+2],sum[L+2];
void seive(void)
{
	int i,j,k=L/2;
	for(i=1;i<=L;i++)
		phi[i]=i;
	phi[1]=0;
	for(i=2;i<=k;i++)
	{
		if(prime[i]==0)
		{
			for(j=i+i;j<=L;j+=i)
			{
				prime[j]=1;
				phi[j]=(phi[j]/i)*(i-1);
			}
		}
	}
	for(i=2;i<=L;i++)
	{
		if(!prime[i])
			phi[i]=i-1;
	}
	for(i=1;i<=L;i++)
		sum[i]=phi[i]+sum[i-1];
}
int main()
{
	seive();
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		printf("%d\n",2*sum[n]+1);
	}
	return 0;
}