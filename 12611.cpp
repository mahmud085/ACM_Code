#include<cstdio>
#include<cmath>
int main()
{
	int a,b,c,d,i,n;
	double l,r,m,f,mul,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		b=5*a;
		l=(45*b)/100;
		r=(55*b)/100;
		m=(60*b)/200;
		printf("Case %d:\n",i);
		printf("-%.0lf %.0lf\n",l,m);
		printf("%.0lf %.0lf\n",r,m);
		printf("%.0lf -%.0lf\n",r,m);
		printf("-%.0lf -%.0lf\n",l,m);
	}
	return 0;
}