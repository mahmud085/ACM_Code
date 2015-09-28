#include<stdio.h>
int main()
{
	int x,i,n;
	float e,a,b,c,d;
	x=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f %f",&c,&d);
		a=(1.8*c)+32;
		b=a+d;
		e=(b-32)/1.8;
		printf("Case %d: %.2f\n",x,e);
		x++;
	}
	return 0;
}