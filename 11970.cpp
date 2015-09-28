#include<stdio.h>
#include<math.h>
long e[1000000];
int main()
{
	long a,b,c,d,i,j,k,n,s,x=1;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{k=0;
		scanf("%ld",&a);
		for(j=1;j<=a;j++)
		{
			s=j*j;
			if(s==a||s>a)
				break;
			b=a-s;
			c=sqrt(a-b);
			d=b%c;
			if(d==0)
			{
				e[k]=b;
				k++;
			}
		}
		printf("Case %ld: ",x);
		for(j=k-1;j>=0;j--)
		{
		printf("%ld",e[j]);
		if(j!=0)
			printf(" ");
		}
		printf("\n");
		x++;
	}
	return 0;
}