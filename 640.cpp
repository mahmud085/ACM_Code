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
long arr[MX];
int main()
{
	long a,b,c,d,e,i,j,k,n;
	for(i=1;i<=1000000;i++)
	{
		a=i;
		c=0;
		while((a/10)>0)
		{
			b=a%10;
			a=a/10;
			c=c+b;
		}
		c+=a+i;
		arr[c]=1;
	}
	for(i=1;i<=1000000;i++)
	{
		if(arr[i]==0)
			printf("%ld\n",i);
	}
	return 0;
}