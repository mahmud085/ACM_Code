#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,e,f,i,j,k,n;
	double rad,len;
scanf("%lf",&n);
for(i=1;i<=n;i++)
{k=3.141592654;
	scanf("%lf",&a);
	b=a/5.0;
	c=b*1.0;
	j=c*c;
	rad=k*j;
	d=a/10.0;
	e=6.0*d;
	f=a*e;
	len=f-rad;
	printf("%.2lf %.2lf\n",rad,len);
}
return 0;
}

