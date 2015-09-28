#include<stdio.h>
#include<math.h>
int main()
{
	 long long a,b,c,d,e,i=1,j;
	 while(scanf("%lld",&a),a!=0)
	 {
		 b=ceil((3+sqrt(9+8*a))/2);
		 printf("Case %lld: %lld\n",i,b);
		 i++;
	 }
	 return 0;
}