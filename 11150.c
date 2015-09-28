#include<stdio.h>
int main()
{
	long int a,c,s;
	while(scanf("%ld",&a)!=EOF)
{
	c=a/2;
	s=a+c;
	
	printf("%ld\n",s);
}
	return 0;
}