#include<stdio.h>
int main()
{
	int a,b,c,s,x=1,n;
	while(scanf("%d",&n),n>0)
	{s=0;b=2;
		for(a=1;a<n;)
		{
			c=a*b;
			a=c;
			s++;
		}
		printf("Case %d: %d",x,s);
		printf("\n");x++;
	}
	return 0;
}