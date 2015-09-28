#include<stdio.h>
#include<math.h>
int main()
{
long n,e,t,a,j,l,k,i,F;
while(scanf("%ld",&n)!=EOF)
{
	
		e=0,F=0,t=0,k=1;
		if(n==0)
			e=2;
		if(n==1||n==2||n==3||n==5||n==7)
			printf("%ld is prime.\n",n);
		else
		{
			int b=int (sqrt(n));
		for(i=2;i<=b;i++)
		{
		if(n%i==0)
		{	
		F=1;
		break;
		}
		}
		if(F==1)
		printf("%ld is not prime.\n",n);
		else
		{
		for(a=n;a>=1;)
		{	
		j=a%10;
		t=(t*10)+j;
		a=a/10;
		
		}
			int c=int(sqrt(t));
		for(l=2;l<=c;l++)
		{
		if(t%l==0)
		{	
		e=1;
		break;
		}
		e=0;
		}
		if(e!=F||t==n)
		printf("%ld is prime.\n",n);
		else if(e==F&&t!=n)
		printf("%ld is emirp.\n",n);
		}
		}
	
}
return 0;
}