#include<stdio.h>
int main()
{
	long n,c,d;

	while(scanf("%ld",&n),n>=0)
	{
		if(n==1)
			c=0;
		else
			c=n*25;
		printf("%ld%\n",c);
	}
	return 0;
}
