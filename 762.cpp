#include<cstdio>
#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<cstring>
#include<map>
#include<algorithm>
using namespace std;
long sts[105][105];
int w[1000],r[1000];
string s[1000];
int main()
{
	vector<int >v[1000];
	map<string,int>m,n;
	queue<int >q;
	long a,b,u,t,i,j,k,node,edge,des=1;
	while(scanf("%ld",&node)!=EOF)
	{k=1;
	if(des!=1)
		printf("\n");
		for(i=0;i<node;i++)
		{
			string c,d; 
			cin >> c >> d;
			m[c]++;
			m[d]++;
				if(m[c]==1)
					n[c]=k++;
				if(m[d]==1)
					n[d]=k++;
				s[n[c]]=c;
				s[n[d]]=d;
				v[n[c]].push_back(n[d]);
				v[n[d]].push_back(n[c]);
		}
		string e,f;
		cin >> e >> f ;
		q.push(n[e]);
		j=0;int flag=0;
		while(!q.empty())
		{
			t=q.front();
			q.pop();
			for(i=0;i<v[t].size();i++)
			{
				u=v[t][i];
				
				if(sts[t][u]==0)
				{
					//printf("%ld %ld\n",t,u);
					w[j]=t;
					r[j]=u;
					j++;
					if(u==n[f])
					{
						flag=1;
						break;
					}
					sts[t][u]=sts[u][t]=1;
					q.push(u);
				}
			}
		}
		if(flag)
		{
			for(i=0;i<j;i++)
			//	printf("%s %s\n",s[w[i]],s[r[i]]);
			cout<<s[w[i]]<<" "<<s[r[i]]<<endl;	
		}
		else
			printf("No route\n");
		for(int i=0;i<100;i++)
		v[i].clear();
	memset(s,0,sizeof(s));
		memset(sts,0,sizeof(sts));
		memset(w,0,sizeof(w));
		
		des++;
		m.clear();n.clear();
	}
	return 0;
}
