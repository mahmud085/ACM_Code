#include<stdio.h>
int a[1000001],b[1000001],c[1000001];
int main()
{
	long d,e,f,i,j,k,l,n,q,s;
	scanf("%ld",&l);
	for(q=1;q<=l;q++)
	{
		scanf("%ld",&n);
		k=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld %ld",&d,&e);
			a[i]=d;b[i]=e;
		}
		int hold=0;
		for(j=i-1;j>=0;j--)
		{
			f=a[j]+b[j]+hold;
			if(f>9)
			{
				c[k++]=f-10;
				hold=1;
			}
			else
			{
				c[k++]=f;
				hold=0;
			}
		}
		if(hold>0)
			c[k++]=hold;
		for(i=k-1;i>=0;i--)
			printf("%ld",c[i]);
		printf("\n");
		if(q!=l)
			printf("\n");
	}
	return 0;
}