#include<stdio.h>
#include<string.h>
int no[10001];
int main()
{

	int b,c,d,e,i,j,k,l;
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{k=0;
		scanf("%d",&c);
		for(j=1;j<=c;j++)
		{ e=j;
			while(e!=0)
			{
				d=e%10;
				no[d]++;
				e=e/10;
			}
		}
		for(l=0;l<10;l++)
		{
		 printf("%d",no[l]);
		 if(l!=9)
			 printf(" ");
		}
		printf("\n");
		memset(no,0,sizeof(no));
	}
	return 0;
}
