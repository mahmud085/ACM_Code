#include<stdio.h>
#include<string.h>
#include<math.h>
typedef unsigned long long sam;
int main()
{
	sam a,b,c,d,i,j,n;
	while(scanf("%llu %llu",&a,&b)!=EOF)
	{
		c=0;
		for(i=1;i<=a;i++)
		{
			c+=pow(b,i)*i;
		}
		printf("%llu\n",c);
	}
	return 0;
}