#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,n,i;
	while(scanf("%d %d",&a,&b),a!=0&&b!=0)
	{
		if(a==1||b==1)
			e=a*b;
		else if(a==2||b==2)
		{
			if(a==2)
			{
				f=b/2;

				if((b%2!=0)||(f%2!=0))
					f=f+1;
				e=a*f;
			}
			else if(b==2)
			{
				f=a/2;
				if((a%2!=0)||(f%2!=0))
					f=f+1;
				e=b*f;
			}
		}
			else
		{
		c=a*b;
		d=c/2;
		e=c-d;
		}
		printf("%d knights may be placed on a %d row %d column board.\n",e,a,b);
	}
	return 0;
}
