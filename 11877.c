#include<stdio.h>
int main()
{
	int a,c,d,e,s;
	while(scanf("%d",&a),a!=0)
{
	s=0;
	while(a>=3)
	{
	c=a/3;
	d=a%3;
	a=d+c;
	if(a<3)
	{e=a/2;
	a=a+e;
	}
	s=s+c;
	}
	
	printf("%d\n",s);
}
	return 0;
}