#include<stdio.h>
int main()
{	long int a,b,c,s,d,e,f;
		

	while(scanf("%ld %ld",&a,&b),a!=0&&b!=0)
	{s=0;c=0;

	
	if(a>b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
		while(a!=0||b!=0)
		{
			d=a%10;
		a=a/10;
		e=b%10;
		
		b=b/10;
		e=e+c;
		f=d+e;
		
		if(f>9)
		{c=1;
		s++;
		//e=e+c;
		}
	else
		c=0;
		}
	if(s==0)
		printf("No carry operation.\n");
	
	if(s>1)
	printf("%ld carry operations.\n",s);
	if(s==1)
		printf("%ld carry operation.\n",s);
	}
return 0;
}