#include<stdio.h>
#include<math.h>
long long a,b,c,d,e,f,g,h,s,i,j,k,m,n;


int main()
{
	

		while(scanf("%lld",&n),n!=0)
		{
		s=sqrt(n);
		if(s*s!=n)
			s=s+1;
		m=s*(s-1)+1;
		if(s%2==0)
		{
			if(n<m)
			{
				e=m-n;
				g=s-e;
				h=s;
			}
			else if(n>m)
			{
				g=s;
				f=n-m;
				h=s-f;
			}
			else
			{
				g=s;
				h=s;
			}
		}
		else
		{
			if(n>m)
			{
				e=n-m;
				g=s-e;
				h=s;
			}
			else if(n<m)
			{
				g=s;
				f=m-n;
				h=s-f;
			}
			else
			{
				g=s;
				h=s;
			}
		}

		printf("%lld %lld\n",g,h);

	
	
	}
	return 0;
}