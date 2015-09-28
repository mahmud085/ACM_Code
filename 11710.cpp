#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>	
#include <numeric>
using namespace std;
int parent[410];
int node,edge;
struct t
{
	int u,v,w;
}a[79810];
bool com(t y,t p)
{
	if(y.w < p.w)
		return true;
	return false;
}
int parentof(int z)
{
	if(z==parent[z])
		return z;
	return parent[z]=parentof(parent[z]);
}
void pre()
{
	int k;
	for( k=0;k<=400;k++)
		parent[k]=k;
}
	
int main()
{
	
	while(scanf("%d %d",&node,&edge),node!=0&&edge!=0)
	{
	map <string ,int> name;
		pre();

		for(int i=0;i<node;i++)
		{
			string s;
			cin >>s;
			//scanf("%s",s);
			name[s]=i+1;
		}
		for(int i=0;i<edge;i++)
		{
			string x,y;
			int f;
			cin >> x >> y >> f;
			//scanf("%s %s",x,y);
			//scanf("%d",&f);
			a[i].u=name[x];
			a[i].v=name[y];
			a[i].w=f;
		}
		string g;
		//scanf("%s",g);
		cin >> g;
		sort(a,a+edge,com);
		int c=0;
		int d=node-1;
		for(int i=0;i<edge&&d;i++)
		{
			int m=parentof(a[i].u);
			int n=parentof(a[i].v);
			if(m!=n)
			{
				parent[m]=n;
				d--;
				c+=a[i].w;
			}
		}
		if(d)
			printf("Impossible\n");
		else
			printf("%d\n",c);
	}
	return 0;
}