#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	long long a,n,b,c,d,e,f,i,j,k,l,s;
	while(scanf("%lld",&a),a>=0)
	{n=a;f=1;
		for(i=sqrt(n)+1;i>=2;i--) 
		{a=n;
			for(c=1;c<=i;c++)
			{
					b=(a/i);
					d=a%i; 
				
			if((b+d)%i==0&&d==1&&c!=i)
			{
				a=a-b-d;
			}
			else
				break;
			
			}
			if(c==i&&d==1)
			{
				a=a-b-d;
				if(a%i==0)
				{f=0;
				break;
				}
			}
		}
		//if(n==3)
		//printf("3 coconuts, 2 people and 1 monkey\n");
		 if(f==0)
			printf("%lld coconuts, %lld people and 1 monkey\n",n,i);
		else
			printf("%lld coconuts, no solution\n",n);
	}

return 0;
}