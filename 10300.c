#include<stdio.h>
int main()
{
	int a[1000];
	int b,c,d,i,j,n,s,t;
	scanf("%d",&n);
		for(t=0;t<n;t++)
		{s=0;
			scanf("%d",&b);
			for(i=0;i<(b*3);i++)
			{
				scanf("%d",&a[i]);
			}
			for(j=0;j<(b*3)-2;j+=3)
			{	c=a[j];
			d=a[j+2];
				s+=c*d;
			}
			printf("%d\n",s);
		}
		return 0;
}