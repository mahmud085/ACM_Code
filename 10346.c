#include<stdio.h>
int main()
{
	int g,s,h,j,c;
	while(scanf("%d %d",&g,&c)!=EOF)
	{
		s=g;
		while(g>=c)
		{
			h=g/c;
			j=g%c;
			g=h+j;
			s+=h;
		}
		
printf("%d\n",s);
	}
return 0;
}