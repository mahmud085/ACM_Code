#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
unsigned long num[10000001],ar[100000001],array[100001];
char ar1[111],ar2[111];
long fibon (long);
long x,n;
void fibo()
{
	
	for(n=1;n<=37;n++)
	{
		x=fibon(n);
		//printf("%ld ",x);
		ar[x]=n;
	}
}
long fibon(long m)
{ 
    if( m == 0 || m == 1 )
		return 1;
    else if( array[m] == 0 ) // ami oke ekbaro process kori nai - or khub mon kharap! :(
        array[m] = fibon( m-1 ) + fibon( m-2 ); // ye! o khushi! :D
	return array[m];
}
int main()
{

	fibo();
	 long d,e,i,j,k,n,l,max;
	scanf("%lld",&n);
	while(n--)
	{
max=0;
		scanf("%lld",&d);
		for(i=1;i<=d;i++)
			scanf("%lld",&num[i]);
		getchar();
		gets(ar1);
		l=strlen(ar1);
		j=1;
		memset(ar2,' ',sizeof(ar2));
		for(i=0;i<l;i++)
		{
			if(ar1[i]>='A'&&ar1[i]<='Z')
			{
				e=ar[num[j++]];
				ar2[e]=ar1[i];
				if(e>max)
					max=e;
			}
		}
		for(i=1;i<=max;i++)
		{
				printf("%c",ar2[i]);
		}
		printf("\n");


	}
return 0;
}
