#include<cstdio>
int main()
{
	long a,b,c,d,n,m,i,j;
	a=1;b=1;n=6,m=8;
	printf("%10ld%10ld\n",n,m);
	for(i=2;i<=10;i++)
	{
		c=6*n-a;
		d=c+n+m;
		a=n;
		n=c;
		m=d;
		printf("%10ld%10ld\n",n,m);
	}
	return 0;
}
