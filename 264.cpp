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
#define MX 10000002
#define MOD 1000000007
#define MAX a>b?a:b
using namespace std;
long a[MX],b[MX];
void pre()
{
	long  c,i=1,j,k=1;
	for(i=1;i<=4480;i++)
	{
		if(i%2==0)
		{c=i;
			for(j=1;j<=i;j++)
			{
				a[k]=j;
				b[k]=c;
				c--;
				k++;
				if(k>10000000)
					break;
			}
		}
		else
		{
			c=i;
			for(j=1;j<=i;j++)
			{
				a[k]=c;
				b[k]=j;
				c--;
				k++;
					if(k>10000000)
					break;
			}
		}
			if(k>10000000)
					break;
	}
}

int main()
{
	pre();
	long n;
	while(scanf("%ld",&n)!=EOF)
	{
		printf("TERM %ld IS %ld/%ld\n",n,a[n],b[n]);
	}
	return 0;
}
