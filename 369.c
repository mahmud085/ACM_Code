#include<stdio.h>
int main()
{
	int i,j,n,m;
	long double c,d,s,t;
	while(scanf("%d %d",&n,&m),n!=0&&m!=0)
	{s=1;t=1;
	d=n-m;
	if(d>=m)
	{
	for(i=n;i>d;i--)
	{
		s=s*i;
	}
	for(j=m;j>0;j--)
	{
		t=t*j;
	}
	c=s/(t);
	}
	if(d<m)
	{s=1;t=1;
	for(i=n;i>m;i--)
	{
		s=s*i;
	}
	for(j=d;j>0;j--)
	{
		t=t*j;
	}
	c=s/(t);
	}
	printf("%d things taken %d at a time is %.0Lf exactly.\n",n,m,c);
	}
return 0;
}