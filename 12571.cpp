#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
long ar3[100006];

int main()
{
	long a,b,c,d,i,j,k,t;
	scanf("%ld",&t);
	for(j=1;j<=t;j++)
	{
		long mx;
		scanf("%ld %ld",&a,&b);
		for(k=1;k<=a;k++)
			scanf("%ld",&ar3[k]);
		//sort(ar3,ar3+a);
		for(k=1;k<=b;k++)
		{
			scanf("%ld",&c);
			
			//sort(ar3,ar3+a);
			long e=0;
			for(i=1;i<=a;i++)
			{
				d=c&ar3[i];
				if(d>e)
					e=d;
			}
			
			printf("%ld\n",e);
		}
	}
	return 0;
}
