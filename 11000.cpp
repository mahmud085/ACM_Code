#include<stdio.h>
int main()
{
	long m,f,c,s,t,i,n;
	while(scanf("%ld",&n),n>=0)
	{m=0,s=0,f=0;
	if(n==0)
		printf("0 1\n");
	else
	{
		for(i=0;i<n;i++)
		{
			f=m;
			m=m+s+1;
			s=f;
			t=m+s+1;

		}
		printf("%ld %ld\n",m,t);
	}
	}
	return 0;
}
