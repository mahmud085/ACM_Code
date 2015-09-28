#include<cstdio>
#include<cmath>
#include<cstdlib>
int main()
{
	long long a,b,c,d,sq,e,f,g,sum,i,j,k,n;
	scanf("%lld",&n);
	for(k=1;k<=n;k++)
	{
		sum=0;
		scanf("%lld",&a);
		sq=sqrt(a);
		for(i=1;i<=sq;i++)
		{
			b=a/i;
			if(b!=i)
			sum+=b;
			c=a/(i+1);
			sum+=abs(b-c)*i;
		}

			printf("%lld\n",sum);
	}
	return 0;
}

