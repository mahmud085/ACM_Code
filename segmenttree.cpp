#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#define mx 100001
int arr[mx],tree[mx*3];
using namespace std;
void init(long node,long b,long e)
{
	if(b==e)
	{
		tree[node]=arr[b];
		return;
	}
	long left=node*2;
	long right=node*2+1;
	long mid=(b+e)/2;
	init(left,b,mid);
	init(right,mid+1,e);
	tree[node]=tree[left]+tree[right];
}
long query(long node,long b,long e,long i,long j)
{
	if(i>e||j<b)return 0;
	if(b>=i&&e<=j) return tree[node];
	long left=node*2;
	long right=node*2+1;
	long mid=(b+e)/2;
	long p1=query(long left,long b,long mid,long i,long j);
	long p2=query(long right,long mid+1,long e,long i,long j);
	return p1+p2;
}

int main()
{
	long a,c,d,i,j,k,n;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>arr[i];
	init(1,1,n);
