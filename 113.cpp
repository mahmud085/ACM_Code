#include<stdio.h>
#include<math.h>
int main()
{

	double n,b,c,i;
	while(scanf("%lf %lf",&n,&b)!=EOF)
	{
		c=1/n;
		i=pow(b,c);
	
	printf("%.0lf\n",i);
	}
	return 0;
}