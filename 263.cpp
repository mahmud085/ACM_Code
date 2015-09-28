#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
  long ar1[1000],ar2[1000];
int main()
{
	long a,b,c,d,e,f,i,j,k,l,n,r,s,count;
	while(scanf("%lld",&n),n!=0)
	{
		printf("Original number was %lld\n",n);
		count=0;r=0;a=n;f=-1;
		while(1)
		{
			count++;
		i=0;
		while(a!=0)
		{
			ar1[i++]=a%10;
			a=a/10;
		}
		sort(ar1,ar1+i);
		s=0;b=0;
		for(j=0;j<i;j++)
		{
			s=s+pow(10,b)*ar1[j];
			b++;
		}
		c=b-1;d=0;
		for(j=0;j<i;j++)
		{
			d+=pow(10,c)*ar1[j];
			c--;
		}
			e=s-d;
			printf("%lld - %lld = %lld\n",s,d,e);
			
			a=e;
			for(k=0;k<r;k++)
			{
				if(ar2[k]==e)
				{
					f=ar2[k];
					break;
				}
				
			}
			if(f==e)
			{
				printf("Chain length %lld\n\n",count);
				break;
			}
			else
				ar2[r++]=e;
		}
	}
return 0;
}