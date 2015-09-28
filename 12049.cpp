#include<stdio.h>
#include<string.h>
#include<cmath>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<string>
#include<iostream>
using namespace std;
long arr[10010],ar2[10010];
map<int,int>mp1,mp2;
int main()
{
	long a,b,c,d,e,i,j,k,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		for(j=0;j<a;j++)
		{
			cin>>c;
			arr[j]=c;
			mp1[c]++;
		}
		for(j=0;j<b;j++)
		{
			cin>>c;
			ar2[j]=c;
			mp2[c]++;
		}
		if(a>=b)
			k=a;
		else
		k=b;

		long sum=0;
		for(j=0;j<k;j++)
		{
			d=arr[j];e=ar2[j];
			if(mp1[d]>mp2[d])
				sum+=mp1[d]-mp2[d];
			else
				sum+=mp2[d]-mp1[d];
			mp1[d]=0;mp2[d]=0;
			if(mp1[e]>mp2[e])
				sum+=mp1[e]-mp2[e];
			else
				sum+=mp2[e]-mp1[e];
			mp1[e]=0;mp2[e]=0;
		}
		cout<<sum<<endl;
		mp1.clear();
		mp2.clear();
	}

	return 0;
}

