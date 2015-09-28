
#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	while(scanf("%d %d",&a,&b),a>=0&&b>=0)
	{
		if(a>b)
		{
			c=a-b;
			d=100+b-a;
			if(c>d)
				e=d;
			else
				e=c;
		}
		else
		{
			c=b-a;
			d=100+a-b;
			if(d>c)
				e=c;
			else
				e=d;
		}
		printf("%d\n",e);
	}
	return 0;
}