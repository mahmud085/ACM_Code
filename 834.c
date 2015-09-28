#include<stdio.h>
int main()
{
	int e[1000],a,b,c,d,f,g,i,j,n,s;
	while(scanf("%d %d",&a,&b),a!=0&&b!=0)
	{
		c=a/b;
		d=a%b;
		a=b;
		b=d;
		printf("[%d;",c);
		if(d==0)
		{
			printf("%d]",a);
			//break;
		}
		else
		{
		for(i=0;;i++)
		{	n=a;
			f=a/b;
			g=a%b;
			a=b;b=g;
			//e[i]=f;
			if(b==0)
			{
				e[i]=n;
				break;
			}
			else
				e[i]=f;
				
		}
		for(j=0;j<=i;j++)
		{
			if(j!=i)
			{
				printf("%d,",e[j]);
			}
			else
			{
				printf("%d]",e[j]);
			}
		}
		}
		printf("\n");
	}
	return 0;
}