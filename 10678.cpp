#include<stdio.h>
#include<math.h>
double pi=2*acos(0);
int main()
{
	double a,b,l,d,area;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf %lf",&d,&l);
		a=l/2;
		b=sqrt(a*a-(d/2)*(d/2));
		area=pi*a*b;
		printf("%.3lf\n",area);
	}
	return 0;
}

