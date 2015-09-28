#include<stdio.h>
#include<math.h>
#define L 1000001
long long a[L],b[1000001];
long long c,d,e,f,g,i,j,k,l,m,n,s;	
	void prime(void)
	{

		for(j=4;j<L;j+=2)
			a[j]=1;
		
	
		for(i=3;i<L;i+=2)
		{
			if(a[i]==0)
			{
            for(j=i*i;j<L;j+=i+i)
			a[j]=1;
		    }
		}
			b[0]=2;
		k=1;
	    for(i=3;i<L;i+=2)
		{
			if(a[i]==0)
			b[k++]=i;

		}
	}
	int main()	
{
		prime();
		while(1)
	{
		scanf("%lld",&n);
//l=n;
		l=sqrt(n);
	if(n==0)
		break;
	
    m=0;s=0;
    
    for(i=0;i<l;i++)
	{
	
			c=n-b[i];
			if(a[c]==0)
			{
				s=1;
			break;
			}
	
		
	}

	if(s==1)
printf("%lld:\n%lld+%lld\n",n,b[i],c);
	else
		printf("%lld:\nNO WAY!\n",n);
}
return 0;
}
