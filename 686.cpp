#include<cstdio>
#include<cstring>
#include<algorithm>
#define L 32770
using namespace std;
int ar1[L],prime[L],b[L];
void seive()
{
	int m,o,k;
	for(m=2+2;m<L;m+=2)
		ar1[m]=1;
	for(m=3;m<L;m+=2)
	{
		if(ar1[m]==0)
		{
			for(o=m*m;o<L;o+=m+m)
			{
				ar1[o]=1;
			}
		}
	}
	ar1[1]=1;
	prime[0]=2;
	k=1;
	for(m=3;m<L;m+=2)
	{
		if(ar1[m]==0)
			prime[k++]=m;
	}
	//return k;
}


int main()
{
	int a,c,d,i,k,j,n;
	seive();
	while(scanf("%d",&n),n!=0)
	{
		a=0;
		for(i=0;prime[i]<=n/2;i++)
		{
			c=n-prime[i];
			if(ar1[c]==0&&c>0)
			{
				a++;
			}
		}
		printf("%d\n",a);
		memset(b,0,sizeof(b));
	}
	return 0;
}