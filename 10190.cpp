#include<stdio.h>
int main()
{
	long r[100],a,b,c,d,i,j,k,n;
	while(scanf("%ld %ld",&a,&b)!=EOF)
	{	k=0;
		r[k++]=a;
		if(a==0||a==1||b==0||b==1)
		{
			printf("Boring!\n");
			continue;
		}
		else
		{
		while(a!=1)
		{
			c=a%b;
			a=a/b;
			if(c==0)
			{r[k]=a;
			d=0;k++;
			}
			else
			{
				d=1;break;
			}
		}
		}
		if(d==0)
		{
			for(i=0;i<k;i++)
			{
				printf("%ld",r[i]);
			if(i!=k-1)
				printf(" ");
			}
		}
		
		if(d==1)
			printf("Boring!");
	printf("\n");
	}
	return 0;
}