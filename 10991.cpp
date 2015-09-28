#include<stdio.h>
#include<math.h>
#define pi 3.141592654
int main()

{
	double a,b,c,b1,b2,b3,r1,r2,r3,v1,v2,v3,sum,area,rs,s;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		scanf("%lf %lf %lf",&r1,&r2,&r3);
		a=r3+r2;
		b=r1+r3;
		c=r1+r2;
		s=(a+b+c)/2.0;
		area=s*(s-a)*(s-b)*(s-c);
		area=sqrt(area);
		b1 = acos((b*b+c*c-a*a)/(2.0*b*c));
        b2 = acos((a*a+c*c-b*b)/(2.0*a*c));
        b3 = acos((a*a+b*b-c*c)/(2.0*a*b));

        area -= 0.5*b1*r1*r1;
        area -= 0.5*b2*r2*r2;
        area -= 0.5*b3*r3*r3;

		
		printf("%.6lf\n",area);
	}
	return 0;
}