#include<stdio.h>
#include<string.h>
int main()
{
	char a[102][21],q[21];
	int b[102];
	int c,d,e,f,i,j,k,n,s,x=1;
	scanf("%d",&c);
	for(i=0;i<c;i++)
	{f=0;
		scanf("%d",&d);
		for(j=0;j<d;j++)
		{
			scanf("%s %d",&a[j],&b[j]);
		} 
		scanf("%d",&e);
		scanf("%s",&q);
		for(k=0;k<d;k++)
		{
			if(strcmp(a[k],q)==0)
			{
				if(e>=b[k])
				{
					f=1;
				printf("Case %d: Yesss\n",x);
				break;
				}
				else if(e+5>=b[k])
				{
					f=1;
					printf("Case %d: Late\n",x);
					break;
				}
			
			}
			
		}
		if(f==0)
			{printf("Case %d: Do your own homework!\n",x);}
x++;

	}
	return 0;
}