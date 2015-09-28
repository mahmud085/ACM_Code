#include<stdio.h>
int main()
{
	int a,b,c,d,i=1,n,f,s;
	while(scanf("%d %d",&a,&b),a!=0&&b!=0)
	{f=1;
		c=a/b;
		d=a%b;
		if(c>26)
		{
			f=0;
			//break;
		}
		else if(d==0)
		{
			s=c-1;
		}
		else
			s=c;
		if(f==0)
	
			printf("Case %d: impossible\n",i);
		else
			printf("Case %d: %d\n",i,s);
i++;	
	}
	return 0;
}