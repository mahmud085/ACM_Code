#include<stdio.h>

int main()
{
	int a[10001],i,j,k,n;
	long b,c,d,e,f,m,g,s;
	while(scanf("%d",&n)!=EOF)
	{d=0;e=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%ld",&b);
		m=b;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{	
				c=a[i]+a[j];
				if(c==b)
				{
					d=a[i];
					e=a[j];
					if(d<=e)
						s=e-d;
					else
						s=d-e;
					if(s<m)
					{
						m=s;
						if(d>=e)
						{
							f=e;
							g=d;
						}
						else
						{
							f=d;
							g=e;
						}
					}


				}
			}
		}
		printf("Peter should buy books whose prices are %ld and %ld.\n\n",f,g);
	}
	return 0;
}
	