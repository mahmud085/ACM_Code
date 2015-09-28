#include<stdio.h>
#include<math.h>

int main()
{
long unsigned t,r,s,div,l,u,maxnum,max,i,j,k,temp;
while(scanf("%lu",&t)==1)
{
	for(i=1;i<=t;i++)
	{
		scanf("%lu%lu",&l,&u);
		if(l>u)
		{
			temp=l;
			l=u;
			u=temp;
		}
max=0;
		for(j=l;j<=u;j++)
		{

		div=0;
		for(k=1;k<=sqrt(j);k++)
		{
			if(j%k==0)
			{
			div++;
			if(j/k!=k)
			div++;
			}
		}
		if(div>max)
		{
		max=div;
		maxnum=j;
		}
}
printf("Between %lu and %lu, %lu has a maximum of %lu divisors.\n",l,u,maxnum,max);
}
}
return 0;
}