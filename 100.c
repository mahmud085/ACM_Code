#include<stdio.h>
int main()
{
int i,j,a,b,c,d,e,f,s,m;
while(scanf("%d %d",&i,&j)!=EOF)
{
	c=i;d=j;m=0;
	if(i>j)
	{
		i=i+j;
		j=i-j;
		i=i-j;
		c=j;
		d=i;
	}
		
for(a=i;a<=j;a++)
{s=1;
	for(b=a;b>1;)
	{
	if(b%2!=0)
	{	b=(3*b)+1;}
	else
	{	b=b/2;}
	s++;
	
		
	}
if(s>m)
{
	m=s;
	
}

}
printf("%d %d %d",c,d,m);
printf("\n");
}

return 0;
}