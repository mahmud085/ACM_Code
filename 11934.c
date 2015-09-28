#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,i,l,x;
	while(1)
	{	f=0;
		scanf("%d %d %d %d %d",&a,&b,&c,&d,&l);
		if(a==0&&b==0&&c==0&&d==0&&l==0)
		break;
		for(i=0;i<=l;i++)
		{	x=i;
		e=(a*pow(x,2))+(b*x)+c;
			if(e%d==0)
			{
				f++;
			}
		}
		printf("%d\n",f);
	}
return 0;
}