#include<stdio.h>
int main()
{
__int64 a,b,c,i,n;
while(scanf("%I64d",&n)!=EOF)
{
	a=0,b=0,c=1;
	if(n<=5000)
	{
	for(i=0;i<n;i++)
	{
	a=b+c;
	c=b;
	b=a;
	}
	}
printf("The Fibonacci number for %I64d is %I64d\n",n,a);
}

return 0;
}