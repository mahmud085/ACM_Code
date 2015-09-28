#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,d,e[101],f[101],g,h,i,j,k,n,s;
	while(scanf("%d %d %d",&a,&b,&c),a!=0&&b!=0&&c!=0)
	{s=0;h=0;g=0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&e[i]);
		}
		sort(e,e+a);
		for(k=0;k<a;k++)
		{
			scanf("%d",&f[k]);
		}
		sort(f,f+a);
		for(j=0;j<a;j++)
		{
			
				g=(e[j]+f[a-j-1]);
		if(g>b)
		h+=g-b;
		}
		s=c*h;
		//	s+=h;
		
		printf("%d\n",s);
	}
	return 0;
}