#include<stdio.h>
#include<string.h>
int main()
{
	long a[10000],f[10000],b,c,d,e,n,s,i,j,k,l,m;
	scanf("%ld",&b);
	for(i=0;i<b;i++)
	{	
		j=0;d=0;s=0;l=0;
		scanf("%ld",&n);
		e=n;
		while(n!=0)
		{
			a[j]=n%2;
			n=n/2;
			j++;
		}
		for(k=0;k<j;k++)
		{
			if(a[k]==1)
				d++;
		}
		//printf("%d",d);
		while(e!=0)
		{
			c=e%10;
			e=e/10;
			while(c!=0)
			{
				f[l]=c%2;
				c=c/2;
				l++;
			}
		}
		for(m=0;m<l;m++)
		{
			if(f[m]==1)
				s++;
		}
		printf("%ld %ld\n",d,s);
	}
	return 0;
}
	
