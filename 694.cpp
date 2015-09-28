#include<stdio.h>
int main()
{
long i,j,a,b,c,d,e,f,g,s,m=1;

while(1)
	 
{
	scanf("%ld %ld",&i,&j);
	if(i<0&&j<0)
		break;
f=1;
	
	for(b=i;b>1;)
	{
	if(b%2!=0)
	{	
		b=(3*b)+1;
		if(b>j)
		break;f++;
	}
	else
	{	b=b/2;f++;
	}
	s++;
	
		
	}


printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld",m,i,j,f);
printf("\n");m++;
}
return 0;
}