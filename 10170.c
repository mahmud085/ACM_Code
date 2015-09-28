#include<stdio.h>
int main()
{
	long double a,b,c,d,i,j,k,n,s;
	while(scanf("%Lf %Lf",&a,&b)!=EOF)
	{c=a;d=0;
		while(1)
		{
			d=d+c;
			c=c+1;
			if(d>=b)
			{
				s=c;
				break;
			}

		}
		printf("%.0Lf\n",s-1);
	}
	return 0;
}
