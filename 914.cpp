// BISMILLAHIR RAHMANIR RAHIM //
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#define PI acos(-1.0)
#define EPS 1e-9
#define LL long long
#define MX 1000005
#define MOD 1000000007
#define MAX a>b?a:b
using namespace std;
long prime[100000],dp[10000];
bool ps[1000015];
void seive(void)
{
	long i,j,k;
	k=1;
	for(i=3;i<=MX;i+=2)
	{
		if(ps[i]==0)
		{
			prime[k++]=i;
			for(j=i*i;j<=MX&&j>0;j+=2*i)
			{
				ps[j]=1;
			}
		}
	}
	prime[0]=2;
}
int main()
{
	seive();
	long a,b,c,d,e,t,n,i,j,k;
	scanf("%ld",&n);
	for(t=1;t<=n;t++)
	{
		memset(dp,0,sizeof(dp));
		scanf("%ld %ld",&a,&b);
		i=0;
		while(prime[i]<a)
		{
			i++;
		}
		int mx=0;e=1;
		for(j=i+1;prime[j]<=b;j++)
		{
			c=prime[j]-prime[j-1];
			dp[c]++;
			if(dp[c]>mx)
			{
				mx=dp[c];
				d=c;
				e=0;
			}
			else if(dp[c]==mx)
			{
				e=1;
			}
		}
		if(e==1)
			printf("No jumping champion\n");
		else
			printf("The jumping champion is %ld\n",d);
		
	}
	return 0;
}