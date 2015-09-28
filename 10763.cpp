#include<stdio.h>
#include<algorithm>
using namespace std;
int main ()
{
	int a[500000],e[500000],b,c,d,n,i,j,k,s,l;
	while(scanf("%d",&n),n!=0)
	{//k=0;
		//for(i=0;i<n;i++)
		//{
			for(i=0;i<n;i++)
			{
				scanf("%d %d",&a[i],&e[i]);
				//k++;
			}
		//}
		sort(a,a+n);
		sort(e,e+n);
		for(l=0;l<n;l++)
		{
			if(a[l]==e[l])
			{
				c=0;
			}
			else
			{
				c=1;
				break;
			}
			//l=l+1;
		}
		if(c==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
