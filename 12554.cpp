#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
char arr[101][101];

int main()
{
	int n,a,b,i,j,k,l;
	scanf("%d",&n);
	getchar();
	char ar2[4][101]={"Happy","birthday","to","you"};
	for(i=0;i<n;i++)
		scanf("%s",&arr[i]);
	k=0;l=0,b=0;
	if(n<16)
		a=16;
	else
	{
		if(n%16==0)
		a=(n/16)*16;
		else
			a=((n/16)+1)*16;
	}
	for(i=0;i<a;i++)
	{
		if(b!=11)
		cout<<arr[k]<<": "<<ar2[l]<<endl;
		else
		cout<<arr[k]<<": Rujia"<<endl;
		k++;l++;
		if(k==n)
			k=0;
		if(l==4)
			l=0;
		b++;
		if(b==16)b=0;
	}
	return 0;
}