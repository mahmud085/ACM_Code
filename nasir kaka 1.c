#include<stdio.h>
int isDigitFactorable(int n);
int a,b,c,d,e,n;
int main()
{
	scanf("%d",&n);
	a=isDigitFactorable(n);
	printf("%d\n",a);
}
int isDigitFactorable(int n)
{	d=1,e=0;
	c=1;a=n;
	if(n<0)
		return(e);
	while(n!=0)
	{
		b=n%10;
		n=n/10;
		if(b!=0)
		{
			c=b*c;
		}
	}
	if(a%c==0)
		return(d);
	else
		return(e);
}