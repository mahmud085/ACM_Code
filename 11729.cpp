#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
struct TT
{
	long a,b;
}arr[1010];
bool comp(TT x,TT y)
{
	return x.b>y.b;
}
int main()
{
	long i,j,c,k,n,t=1;
	
	while(scanf("%ld",&n),n!=0)
	{
		for(i=0;i<n;i++)
		{

			scanf("%ld %ld",&arr[i].a,&arr[i].b);
		}
		sort(arr,arr+n,comp);
		long sum=0,s=0;
		s+=arr[0].a;
		sum+=arr[0].a+arr[0].b;
		for(i=1;i<n;i++)
		{
			s+=arr[i].a;
			c=arr[i].b;
			if((s+c)>sum)
				sum=s+c;
		}
		printf("Case %ld: %ld\n",t++,sum);
	}
	return 0;
}
			
