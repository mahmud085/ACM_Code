#include<stdio.h>
//long a[100000000];
int main()
{
	 __int64 i,j,k,l,s,c,m,n;
		 
	
	while(scanf("%I64d",&n)!=EOF)
	{c=0;
		s=n/2;
		m=s-1;
		j=n*s-m;
		k=(n-1)*2;
		i=j+k;
		c=i+(i-2)+(i-4);

	

	printf("%I64d\n",c);
	}
	return 0;
}