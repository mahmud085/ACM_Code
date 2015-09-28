#include<stdio.h>
#include<math.h>
int main()
{
	long a,b,cnt,m,i,j,k,n;
	while(scanf("%ld",&n),n!=0)
	{
		cnt=0;b=n;
		for(i=2,m=0;i*i<=n;i++)
		{
			if(n%i==0)
			{
				if(m!=i)
					cnt++;
				n/=i;
				m=i;
				i=1;
			}
		}
		if(n!=m)
			cnt++;
		printf("%ld : %ld\n",b,cnt);
	}
	return 0;
}