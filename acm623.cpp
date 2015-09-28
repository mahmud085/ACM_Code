#include<stdio.h>
#include<math.h>
#define max 100000
int length=0;
int fact[max];
void mul(long);
void factof(long);
int main()
{
	long n,i,j,k;
	while(scanf("%ld",&n)!=EOF)
	{
		fact[0]=1;
		factof(n);
		printf("%ld!\n",n);
		for(i=length;i>=0;i--)
			printf("%d",fact[i]);
	printf("\n");
	}
	return 0;
}
void factof(long n)
{
	long i;
	for(i=2;i<=n;i++)
	{
		mul(i);
	}
}
void mul(long n)
{
	long i,r=0;
	int arr[max];
	for(i=0;i<=length;i++)
	{
		arr[i]=fact[i];
	}
	for(i=0;i<=length;i++)
	{
		fact[i]=(arr[i]*n+r)%10;
		r=(arr[i]*n+r)/10;
	}
	if(r!=0)
	{
		while(r!=0)
		{
			fact[i]=r%10;
			r=r/10;
			i++;
		}
	}
	length=i-1;
}