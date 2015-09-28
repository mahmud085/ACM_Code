#include<stdio.h>
int main()
{
	int e,b,c,d,i,s,x=1,k,t;
	int a[1000];
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		s=0;e=0;
		scanf("%d %d %d",&b,&c,&d);
		for(i=0;i<b;i++)
		{
			scanf("%d",&a[i]);
		}
			for(i=0;i<b;i++)
			{
			e=e+a[i];
			
			if(e<=d)
			{	s++;
			}
			if(s>c)
			{
				s=s-1;
				break;
			}
			}

			printf("Case %d: %d\n",x,s);

x++;		
	}
	return 0;
}