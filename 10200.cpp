#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#define L 10008
using namespace std;
bool ar1[L];int prime[1501],ar2[10010];
int i,j,k,n,l,a,b,c;
void seive()
{
	int m,o;
//	memset(ar1,0,sizeof(ar1));
	for(m=2+2;m<L;m+=2)
		ar1[m]=true;
	for(m=3;m<=(L);m+=2)
	{
		if(ar1[m]==false)
		{
			for(o=m*m;o<L;o+=m+m)
			{
				ar1[o]=true;

			}
		}
	}
	ar1[1]=true;
	prime[0]=2;
	k=1;
	    for(i=3;i<L;i+=2)
		{
			if(ar1[i]==false)
			prime[k++]=i;

		}

}
bool isPrime (int n)
{
    if ( n < L ) return ar1[n];
    int index = 0;
    for(;prime[index]<sqrt(n);  )
	{
        if ( n % prime[index] == 0 ) return true;
        index++;
    }
    return false;
}
int main()
{
	seive();
	for(i=0;i<=10000;i++)
	{
		a=i*i+i+41;
		//int t=ar1[a];
		if(!isPrime(a))
			ar2[i]=1;
	}

	while(scanf("%d %d",&b,&c)!=EOF)
	{
		int cnt=0;

		for(i=b;i<=c;i++)
		{
			if(ar2[i]==1)
				cnt++;
		}
		//d=(cnt*100)/double(c-b+1);
		printf("%.2lf\n",(cnt*100.0)/(double)(c-b+1)+1e-9);
	}
	return 0;
}
