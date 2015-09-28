#include<stdio.h>
int main()
{
	long long a,b,c,d,i,j,k,s,x=1;
	scanf("%lld",&a);
	for(i=0;i<a;i++)
	{
		s=1,d=1;
		scanf("%lld",&b);
		for(j=0;j<b;j++)
		{
			c=d+s;
			s=d;d=c;
		}
		printf("Scenario #%lld:\n%lld\n",x,c);

			printf("\n");
	x++;
	}
	return 0;
}
