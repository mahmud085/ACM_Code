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
long arr[40];
void mahmud()
{
	long i,j,k;
		w[0]=1;
		for(i=0;i<5;i++)
		{
			for(j=coin[i],k=0;j<=max;j++,k++)
			{
				w[j]+=w[k];
			}
		}
}
int main()
{
	long a,b,c,d,i,j=1,n;
	while(scanf("%ld",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%ld",&arr[i]);
		sort(arr,arr+n);
		b=0;
		for(i=1;i<n;i++)
		{
			

		}

		if(b)
		{
			printf("Case #%ld:",j);
			for(i=1;i<=n;i++)
				printf(" %ld",arr[i]);
			printf("\n");
			printf("This is not an A-sequence.\n");
		}
		else
		{
			printf("Case #%ld:",j);
			for(i=1;i<=n;i++)
				printf(" %ld",arr[i]);
			printf("\n");
			printf("This is an A-sequence.\n");
		}
		j++;
	}
	return 0;
}
