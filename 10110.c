#include<stdio.h>
#include<math.h>
int main()
{
	long a,b,c,d,n;
	while(scanf("%ld",&n),n!=0)
	{
		b=sqrt(n);
		c=b*b;
		if(c==n)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}