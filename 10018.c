#include<stdio.h>
int main()
{
	int a[10000],d,f,g,i,j,k,l,m,t;
	long b,c,n,s;
	scanf("%d",&f);
	for(t=0;t<f;t++)
	{g=0;
scanf("%d",&n);
end:
m=0;s=0;
for(i=n;i>=1;)
{
	j=i%10;
	s=s*10+j;
	i=i/10;
}
c=n+s;
b=c;g++;
while(c!=0)
{
	a[m]=c%10;
	c=c/10;
	m++;
}
for(k=0,l=m-1;k<=l;k++,l--)
	{
		if(a[k]==a[l])
			d=1;
		else
		{
			d=0;
			break;
		}
	}
if(d==1)
{
	printf("%d %ld\n",g,b);
}
else
{
	n=b;
	goto end;
}




	}
return 0;
}