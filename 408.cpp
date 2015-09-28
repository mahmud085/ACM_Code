#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
long arr[10000001];
long cal(long x,long y,long z)
{
	long m,n;
	m=(z+x)%y;
	return m;
}
int main()
{
	long a,b,c,d,i,j,k,n;
	while(scanf("%ld %ld",&a,&b)!=EOF)
	{
		c=0;
		arr[0]=c;
		for(i=1;i<b;i++)
		{
			c=cal(a,b,c);
			arr[i]=c;
		}
		sort(arr,arr+b);
		int f=0;
		for(i=1;i<b;i++)
		{
			if((arr[i]-arr[i-1])!=1)
			{
				f=1;break;
			}
		}
		if(f==0)
			printf("%10ld%10ld    Good Choice\n\n",a,b);
		else if(f==1)
			printf("%10ld%10ld    Bad Choice\n\n",a,b);
	}
	return 0;
}