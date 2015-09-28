#include<stdio.h>
#include<math.h>
long a[1000001],b[1000001];
//long  i,j,max,d,e=0;
void mahmud(void)
{
	long  i,j,max,d,e=0;
		max=0;
		
		a[1]=1;
		b[1]=1;
		a[0]=0;
	for(i=2;i<=(1000000);i++)

	{
		for(j=i;j<=1000000;j+=i)
			a[j]++;
		
	}
	for(i=2;i<=1000000;i++)
	{
	if(a[i]>=max)
	{
		max=a[i];
		b[i]=i;
		e=i;
	}
	else
		b[i]=e;

	}
}
int main()
{
	mahmud();
	long k,n,s,c,d,max;
		scanf("%ld",&n);
		
	for(k=0;k<n;k++)
	{
		scanf("%ld",&c);
	
		printf("%ld\n",b[c]);
	}
	return 0;
}