#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int b,c,d,i,j,k,l;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{k=0;
		scanf("%d",&c);
		for(j=1;j<=c;j++)
		{
			a[k]=j;
			k++;
		}
		for(l=0;l<k;l++)
		{
			if(a[l]==1)
				c++;
			if(a[l]==2)
				d++;
		}
		printf("%d %d",c,d);
	}
	return 0;
}
