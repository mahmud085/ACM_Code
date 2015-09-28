#include<stdio.h>
#define n 10000000
int main()
{
	 __int64 a,b,c=1,i,j;
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			c++;
		}
		else if(i%3==0)
		{
			c++;
		}
		else if(i%5==0)
		{
			c++;
		}
		if(c==11)
			break;
	}
	printf("The 1500'th ugly number is %I64d.",i);
	return 0;
}