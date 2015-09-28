#include<stdio.h>
#include<math.h>
int main()
{
	int a[1000];
	 long  c,b,n,i,j,s;
	
	while(scanf("%ld",&n),n!=0)
	{s=0;
	for(i=0;n!=0;i++)
	{
		b=n%10;
		n=n/10;
		a[i]=b;
	}
	for(j=i-1;j>=0;j--)
	{
		c=a[j];
		s+=c*(pow(2,i)-1);
		i--;
	}
	printf("%ld\n",s);
	}
	return 0;
}