#include<stdio.h>
int main()
{
	int b,i,j,k;
	int c[100];
	scanf("%d %d",&b,&c);
	k=log(c);
	for(j=0;j<k;j++)
	{
		if(c[j]!=b)
		{
			printf("%d",c[j]);
		}
		else
		{
			i=c[j]-b;
		}
	}
	return 0;
}