#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
long  a[1000001],c[1000001];
int main()
{	//long  a[1001],c[1001];
	 long d,m,n,s,e,f,i,j,k;
	while(scanf("%ld %ld",&m,&n),m!=0&&n!=0)
	{s=0;
		for(i=0;i<m;i++)
		{
			scanf("%ld",&a[i]);
			
		}
		sort(a,a+m);

		for(j=0;j<n;j++)
		{
			scanf("%ld",&c[j]);
		}
		sort(c,c+n);
		for(k=0,i=0;i<m;)
		{
			if(a[i]<c[k])
				i++;
			else if(a[i]==c[k])
			{
				s++;
				i++;k++;
			}
			else if(a[i]>c[k])
			k++;
		}
			
		
		printf("%ld\n",s);
		//memset(b,0,sizeof(b));
	}
	return 0;
}
