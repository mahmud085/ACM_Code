#include<cstdio>
#include<cstring>
#include<string>
#include<stdlib.h>
#include<iostream>
#define mx 100005
#include<algorithm>
using namespace std;
struct info
{
	long long sum,prop;
}tree[mx*3];
void update(long long node,long long b,long long e,long long i,long long j,long long x)
{
	if(i>e||j<b)
		return;
	if(b>=i&&e<=j)
	{
		tree[node].sum+=(e-b+1)*x;
		tree[node].prop+=x;
		return;
	}
	long long left=node*2;
	long long right=node*2+1;
	long long mid=(b+e)/2;
	update(left,b,mid,i,j,x);
	update(right,mid+1,e,i,j,x);
	tree[node].sum=tree[left].sum+tree[right].sum+(e-b+1)*tree[node].prop;
}
long long query(long long node,long long b,long long e,long long i,long long j,long long carry=0)
{
	if(i>e||j<b)return 0;
	long long re;
	if(b>=i&&e<=j)
	{
		re=tree[node].sum;
		re=re+(carry*(e-b+1));
		return re;
	}
	long long left=node*2;
	long long right=node*2+1;
	long long mid=(b+e)/2;
	long long p1=query(left,b,mid,i,j,carry+tree[node].prop);
//	cout<<"p1 "<<p1<<endl;
	long long p2=query(right,mid+1,e,i,j,carry+tree[node].prop);
//	cout<<"p2 "<<p2<<endl;
	return p1+p2;
}
int main()
{
	long long a,b,c,d,f,k,t,n,p,q,l;
	scanf("%lld",&t);
	for(l=1;l<=t;l++)
	{
		scanf("%lld %lld",&n,&c);
		printf("Case %lld:\n",l);
		for(k=1;k<=c;k++)
		{
			scanf("%lld",&a);
			if(a==0)
			{
				scanf("%lld %lld %lld",&p,&q,&d);
				update(1,1,n,p+1,q+1,d);
			}
			if(a==1)
			{
				scanf("%lld %lld",&p,&q);
				f=query(1,1,n,p+1,q+1,0);
				printf("%lld\n",f);
			//memset(tree,0,sizeof(tree));
			}

		}
		memset(tree,0,sizeof(tree));
	}
	return 0;
}
