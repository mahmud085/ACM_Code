#include<stdio.h>
#include<math.h>
int main()
{
	int a[1001],s;
	long n;
	int i,j;
	while(scanf("%ld",&n),n!=0)
	{
	s=0;
	for(i=0;n!=0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	printf("The parity of ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	for(j=i-1;j>=0;j--)
	{	s=s+a[j];
		//c=c+a[j]*pow(10,j);
	}
	printf(" is %d (mod 2).\n",s);
	}
	return 0;
}