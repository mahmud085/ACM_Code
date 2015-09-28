#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[10001],b,c,d[10001],e,f,x=1,i,j,k,s;
	while(scanf("%d %d",&b,&c),b!=0&&c!=0)
	{s=0;f=0;
		for(i=0;i<b;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+b);
		for(j=0;j<c;j++)
		{
			scanf("%d",&d[j]);
		}
		printf("CASE# %d:\n",x);
		for(i=0;i<c;i++)
		{s=0;f=0;
			for(k=0;k<b;k++)
			{s++;e=d[i];
				if(a[k]==d[i])
				{
					f=1;
					break;
				}
				
			}
		
			if(f==1)
				printf("%d found at %d\n",e,s);
			else
				printf("%d not found\n",e);
		
		}
		x++;
		
	}
	return 0;
}