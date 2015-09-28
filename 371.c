#include<stdio.h>
int main()
{
long int i,j,a,b,c,d,e,s,m;
while(scanf("%ld %ld",&i,&j),i!=0&&j!=0)
{c=i;d=j;m=0;
	if(i>j)
	{
		i=i+j;
		j=i-j;
		i=i-j;
		c=i;
		d=j;
	}
		
for(a=i;a<=j;a++)
{s=0;
	for(b=a;b>=1;)
	{
	if(b%2!=0)
		b=(3*b)+1;
	else
		b=b/2;
	s++;
	if(b==1)
	break;		
	}
if(s>m)
{
	m=s;
	e=a;
}

}
printf("Between %ld and %ld, %ld generates the longest sequence of %ld values.",c,d,e,m);
printf("\n");
}

return 0;
}