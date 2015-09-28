#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,m,n,i;
	
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
	{
		
		
		m=pow(a,2)*pow(b,2)+pow(c,2)*pow(b,2)+pow(a,2)*pow(c,2);
		n=pow(a,4)+pow(b,4)+pow(c,4);
		d=sqrt((2*m)-n)/3;
		if(d>0)
		printf("%.3f\n",d);
			else
				printf("-1.000\n");
	}
	return 0;
}