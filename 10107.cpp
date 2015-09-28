#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long a[10001],b,c,d,i,j=1,n;
	while(scanf("%ld",&n)!=EOF)
	{
		if(j==1||j==0)
		{	
		a[j]=n;
		printf("%ld\n",a[j]);
		}
		else
		{
			a[j]=n;
			sort(a,a+j+1);
			if(j%2!=0)
			{
				c=(j/2)+1;
				printf("%ld\n",a[c]);
			}
			else
			{
				c=j/2;
				d=a[c]+a[c+1];
				printf("%ld\n",d/2);
			}
		
		}
		j++;
	}
	return 0;
}
		