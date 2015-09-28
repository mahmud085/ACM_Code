#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
long arr[100005];
int main()
{
	long a,b,c,d,i,j,k,n;
	scanf("%ld",&n);
	while(n--)
	{
		scanf("%ld %ld",&a,&b);
		for(i=0;i<b;i++)
		{
			scanf("%ld",&arr[i]);
		}
		sort(arr,arr+b);
		long mx=0;
		for(i=0;i<b;i++)
		{
			c=a-arr[i];
			if(c>arr[i])
				c=arr[i];
			if(mx<c)
				mx=c;
		}
		d=a-arr[0];
		if(d<arr[b-1])
			d=arr[b-1];
		printf("%ld %ld\n",mx,d);
	}
	return 0;
}
