#include<stdio.h>
#include<string.h>
int main()
{	int x,t,i,j,c,d,f,n,k,s;
	char a[21],b[21],e[21];
	char h[10];
	gets(h);
	x=1;
	sscanf(h,"%d",&t);
	for(n=1;n<=t;n++)
	{	f=0;j=0;
		gets(a);
		gets(b);
		c=strlen(a);
		d=strlen(b);
	for(i=0,j=0;i<c;i++)
	{			
		 
			
			 if(a[i]==b[i])
			{
				f=0;
				
			}
			else if(a[i]==' ')
			{
				for(i=0;i<c;i++)
				{
					if(a[i]!=' ')
				{
					e[j]=a[i];
					j++;
				}
				}
				for(k=0;k<d;k++)
				{
				if(e[k]==b[k])
				{
					f=1;
				}
				else 
				{
					f=2;
				}
				}

				
			}
			else
				{
					f=2;
					break;
				}

				//break;
			
		
	}
	
			
		if(f==0)
		printf("Case %d: Yes\n",x);
		
		else if(f==1)
		printf("Case %d: Output Format Error\n",x);
		else if(f==2)
		printf("Case %d: Wrong Answer\n",x);
		
		x++;
	}	

	return 0;
}