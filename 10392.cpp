#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
int main()
{
	long long a,b,c=1,d,i,j,k,n;
	while(scanf("%lld",&n),n>0)
	{
	    //if(c>1)
	    //printf("\n");
		for(i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				printf("    %lld\n",i);
				n/=i;
				i=1;
			}
		}
		printf("    %lld\n\n",n);

	}
	return 0;
}
