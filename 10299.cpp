#include<stdio.h>
#include<math.h>
int main()
{
	 long a,b,m,i,j,k,n;//long long hbe
	double cnt;
	while(scanf("%lld",&n),n!=0)
	{
		cnt=1;b=n;
		
		for(i=2,m=0;i*i<=n;i++)
		{
			if(n%i==0)
			{
				if(m!=i)
				{
					cnt*=(1.0-(1.0/i));
				}
				n/=i;
				m=i;
				i=1;
			}
		}
		if(n!=m)
			cnt*=(1.0-(1.0/n));
		printf("%.0lf\n",cnt*b);
		
	}
	return 0;
}