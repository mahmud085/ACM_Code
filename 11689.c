#include<stdio.h>
int main()
{
	int c,e,f,g,h,i,j,s,N;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{s=0;
		scanf("%d %d %d",&e,&f,&c);
		g=e+f;
		{
		while(g>=c)
		{
			h=g/c;
			j=g%c;
			g=h+j;
			s+=h;
		}
		
		}

printf("%d",s);
printf("\n");
	}



return 0;
}