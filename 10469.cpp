#include<stdio.h>
int main()
{
	unsigned long a,b,c,d,i,j,k,n;
	while(scanf("%lu %lu",&a,&b)!=EOF)
	{
		c=a^b;
		printf("%lu\n",c);
	}
	return 0;
}