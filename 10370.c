#include<stdio.h>
int main()
{	int t,n,i,j;
	float b,s,f,c;
	int a[1000];
scanf("%d",&t);
for(i=0;i<t;i++)
{
	c=0;s=0;
	scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
	for(j=0;j<n;j++)
	{
		s+=a[j];
	}
	b=s/n;
	for(j=0;j<n;j++)
	{
		if(a[j]>b)
			c++;
	}
	f=(c*100)/n;
printf("%.3f%%",f);
printf("\n");
}
return 0;
}