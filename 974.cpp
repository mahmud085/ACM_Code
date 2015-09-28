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
#define MX 1000010
#define MOD 1000000007
#define MAX a>b?a:b
using namespace std;
long ar[40005];
long b,c,d,e,f,i,j,sum,k;
void pre()
{

	ar[1]=ar[9]=1;
	for(i=10;i<=40000;i++)
	{
		c=i*i;
		b=c;
		j=10;f=0;
		while((b/j)>0)
		{
			e=b/j;
			d=b%j;
			k=e+d;
			if(k==i&&d!=0)
			{
				f=1;
				break;
			}
			j=j*10;
		}
		if(f==1)
			ar[i]=1;
	}
	
}

int main()
{
	pre();
	
	long x,y,n;
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%ld %ld",&x,&y);
		printf("case #%ld\n",i);
		for(j=x;j<=y;j++)
		{
			if(ar[j]==1)
			{
				sum=1;
				printf("%ld\n",j);
			}
		}
		if(!sum)
			printf("no kaprekar numbers\n");
		if(i!=n)
			printf("\n");
	}
	return 0;
}
