#include<stdio.h>
#include<string.h>
int a[100],b[20001];
int main()
{
	long c,d,e,f,i,j,k,n,x=1;
	while(scanf("%ld",&n)!=EOF)
	{
		d=0;
		memset(b,0,sizeof(b));
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<n;i++)
		{
			if(a[i]<a[i-1])
			{
				d=1;
				break;
			}
			if(a[i]<1)
			{
				d=1;break;
			}
		
		}
		if(a[0]<1)
		{
			d=1;
		}
		for(j=0;j<n;j++)
		{
			
			for(k=j;k<n;k++)
			{
				c=a[j]+a[k];
				b[c]++;
				
				if(b[c]>1)
				{
					d=1;break;
				
				}
				
				//b[c]=1;
			}
			if(d==1)
				break;
	
			
		}
		if(d==0)
			printf("Case #%ld: It is a B2-Sequence.\n\n",x);
		else
			printf("Case #%ld: It is not a B2-Sequence.\n\n",x);
		x++;
	}
	return 0;
}