#include<stdio.h>
int main()
{int i,t;
	long int a,n;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%ld",&n);
		n=n*567;
		n=n/9;
		n=n+7492;
		n=n*235;
		n=n/47;
		n=n-498;
		a=n/10;
		a=a%10;
		if(a<0)
			a=a*(-1);
		printf("%ld",a);
		printf("\n");

	}
	return 0;
}