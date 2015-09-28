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
#define L 40000
#define MOD 1000000007
#define MAX a>b?a:b
using namespace std;
long prime[20000];
bool ps[L];
void prime_seive()
{
	long i,j,k;
	prime[0]=2;
	k=1;
	for(i=3;i<=L;i+=2)
	{
		if(ps[i]==0)
		{
			prime[k++]=i;
			for(j=i*i;j<=L&&j>0;j+=2*i)
			ps[j]=1;
		}
	}
}
long sum(long n)
{
	long i,j,s;
	s=0;
	while(n>0)
	{
		s+=n%10;
		n=n/10;
	}
	return s;
}
int main()
{
	prime_seive();
	long a,b,c,d,m,n,res,res2,k,t,i;
	scanf("%ld",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%ld",&n);
		for(m=n+1;;m++)
		{
			b=m;
			res=sum(m);
			res2=0;
			for(i=0;prime[i]*prime[i]<=m;i++)
			{	c=0;
				while(m%prime[i]==0)
				{
					m=m/prime[i];
					//if(!c)
					//{
						res2+=sum(prime[i]);
					//}
					c=1;
				}
			}
			if(m>1&&m!=b)
			{
				res2+=sum(m);
			}
			if(res==res2)
			{
				printf("%ld\n",b);
				break;
			}
			m=b;
		}
	}
	return 0;
}