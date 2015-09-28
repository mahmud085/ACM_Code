#include<stdio.h>
int main()
{
long a[1001],f,b,c,d,e,g,i,j,k,l,n;
while(scanf("%ld %ld",&n,&b)!=EOF)
{c=0;k=0;e=0;g=0;
for(i=1;i<=n;i++)
{
	if(i==1)
	{a[k]=i;k++;c++;}
	else if(i==2)
	{a[k]=i;k++;c++;}
	else	
	{
		for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			f=0;
			break;
		}
		else
		{	f=1;}
	}
	if(f==1)
	{a[k]=i;k++;c++;}
	}
}
if(c%2==0)
d=b*2;
else
d=(b*2)-1;
e=c-d;
g=e/2;
if(d>=c)
{printf("%ld %ld: ",n,b);
for(l=0;l<k;l++)
{
	printf("%ld",a[l]);
	if(l!=k-1)
		printf(" ");
}
}
else
{printf("%ld %ld: ",n,b);
for(l=g;l<(g+d);l++)
{
	printf("%ld",a[l]);
	if(l!=(g+d)-1)
		printf(" ");
}
}
printf("\n\n");
}
return 0;
}
