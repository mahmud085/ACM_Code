#include<stdio.h>
int main()
{
	unsigned long long a,b,c,d;
	while(scanf("%llu",&a),a!=0)
	{
		b=(a*10)/9;
		if(a%9==0)
			printf("%llu %llu\n",b-1,b);
		else
			printf("%llu\n",b);
	}
	return 0;
}