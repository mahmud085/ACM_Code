#include<cstdio>
#include<queue>
#include<string>
#include<algorithm>
using namespace std;
struct mah
{
	long n;
};
bool operator<(const mah &w,const mah &x)
{
	return w.n>x.n;
}
int main()
{
	long ar,baal,sum,d,i,j,k;
	priority_queue<mah>qu;
	mah tt,yy;
	while(scanf("%ld",&ar),ar!=0)
	{
		sum=0;long final=0;
		for(i=0;i<ar;++i)
		{
			scanf("%ld",&baal);
			tt.n=baal;
			qu.push(tt);
		}
		while(!(qu.size()==1))
		{
			tt=qu.top();qu.pop();
			yy=qu.top();qu.pop();
			sum=tt.n+yy.n;
			final+=sum;
			tt.n=sum;
			qu.push(tt);
			
		}
		qu.pop();
		printf("%ld\n",final);
	}
	return 0;
}
			