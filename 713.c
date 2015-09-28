#include<stdio.h>
#include<string.h>
int main()
{
	int c,d,g,e,m,f,i,j,x,z,k,l,r,s,t,u;
	char a[210],b[210],p[210],h[10];
	gets(h);
	sscanf(h,"%d",&t);
	for(i=0;i<t;i++)
	{
		g=0;u=0;
		scanf("%s",a);
		scanf("%s",b);
		c=strlen(a);x=c;
		d=strlen(b);z=d;
		if(c<d)
		{
			m=c;
			c=d;
			d=m;
		}
		for(j=0,k=0,l=0;j<c;j++,k++,l++)
		{	
			if(x<z)
			{
			
				if(k<x)
				{
					r=a[k]-48;
				}
				else
				r=0;
				s=((b[j]-48)+g)+r;
			}
			else
			{
				if(k<z)
				{
					r=b[k]-48;
				}
				else
				r=0;
				s=((a[j]-48)+g)+r;
			}
		

			
			
			if(s>=10)
			{
				e=s%10;
				f=s/10;
				p[l]=e;
				g=1;
			}
			else
			{
			p[l]=s;
			g=0;
			}
		}
		if(g==1)
		{
			
			p[l]=f;
		for(l=0;l<=c;l++)
		{
			if(p[l]!=u)
			{
			printf("%d",p[l]);
			u=11;
			}
		}
		}
		else
		{
			for(l=0;l<c;l++)
		{	
				if(p[l]!=u)
				{
			printf("%d",p[l]);
			u=11;
				}
		}
		}
		printf("\n");
	}
	return 0;
}