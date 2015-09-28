#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long a,b,c,d,e,f,g,h,s,i,j,k;
	scanf("%ld",&a);
	while(a--)
	{
		scanf("%ld %ld",&b,&c);
		s=0;
		scanf("%ld",&e);
		for(i=1;i<b;i++)
		{
			scanf("%ld",&d);
			if(d<0)
				d=d*-1;
			s=abs(s+d);
		}
		f=e+s;
		g=abs(e-s);
		h=f%c;
		j=g%c;
		if(h%2==0&&j%2==0)
			printf("Divisible\n");
		else if(j%2!=0&&h%2!=0)
			printf("Not Divisible\n");
		else
			printf("Not divisible\n");
	}
	return 0;
}
