#include<stdio.h>
int main()
{
	int a2,a5,b,c,d,sam,i,j,n,m;
	while(scanf("%d",&n)!=EOF)
	{
		a2=a5=0,sam=1;
		m=n;
		while(m>0)
		{
			c=m;
			while(c%5==0)
			{
				c=c/5;
				a5++;
			}
			while(c%2==0)
			{
				c=c/2;
				a2++;
			}
			m--;
			sam=(sam*(c%10))%10;
		}
		while(a5>a2)
			{
				sam=(sam*5)%10;
				a5--;
			}
			while(a2>a5)
			{
				sam=(sam*2)%10;
				a2--;
			}
			 printf("%5d -> %d\n",n,sam);
		}
		return 0;
	}


