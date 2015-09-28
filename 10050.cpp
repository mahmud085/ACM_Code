#include<stdio.h>
#include<string.h>
int a[10000],r[10000];
int main()
{
	int s,b,c,d,e,f,i,j,k,l,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		scanf("%d",&b);
		for(j=1;j<=b;j++)
			r[j]=0;
		for(j=6,k=7;j<=b;j+=7,k+=7)
		{
			a[j]=-1;
			a[k]=-1;
		}
		scanf("%d",&c);
		for(j=0;j<c;j++)
		{
			scanf("%d",&e);
			for(k=e;k<=b;k+=e)
			{
				if(a[k]!=-1)
				r[k]++;
			}
			
		}
		for(j=1;j<=b;j++)
		{
			if(r[j]!=0)
				s++;
		}
		printf("%d\n",s);
	
	}
	return 0;
}