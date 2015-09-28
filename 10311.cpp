#include<stdio.h>
#include<math.h>
#define L 10008
bool a[L];long b[1500];
long c,d,e,f,g,i,j,k,l,m,n,s,x,y;
void seive()
{
    a[0]=a[1]=1;
		for(i=4;i<L;i+=2)
			a[i]=true;
		for(i=3;i<=sqrt(L);i+=2)
		{
			if(a[i]==false)
			{
            for(j=i*i;j<L;j+=i+i)
			a[j]=true;
		    }
		}
			b[0]=2;
		k=1;
	    for(i=3;i<L;i+=2)
		{
			if(a[i]==false)
			b[k++]=i;

		}
}
int main()
{
	seive();
	while(scanf("%ld",&n)!=EOF)
	{
    m=0;s=0;
	//memset(a,0,sizeof(a));
long mx=99999999;
    for(i=0;b[i]<n;i++)
	{

			c=n-b[i];
			if(isprime(c)&&c>0&&(c+b[i]==n))
			{
				
				if((c-b[i])<mx&&(c-b[i])>0)
				{s=1;
				    mx=c-b[i];
				    x=b[i];
				    y=c;
				}

			}

	}
	if(s==1)
printf("%ld is the sum of %ld and %ld.\n",n,x,y);
	else
		printf("%ld is not the sum of two primes!\n",n);
}
return 0;
}
