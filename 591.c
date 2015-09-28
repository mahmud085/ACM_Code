#include<stdio.h>
#include<string.h>
int main()
{
	int a[1000];
	int b,c,d,i,j,x,s,n;
	x=1;
	while(scanf("%d",&n),n!=0)
	{	s=0;d=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(j=0;j<n;j++)
		{
			s+=a[j];
		}
		c=s/n;
		for(i=0;i<n;i++)
		{
			if(c>a[i])
			{
				d=d+(c-a[i]);
			}
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n",x,d);
	x++;
	}
	return 0;
}