#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,i,n,s;
	int x=1;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{	s=0;
		scanf("%lld",&a);
		c=a;
end:
		s=0;
		while(a!=0)
		{
			b=a%10;
			a=a/10;
			s=s+(pow(b,2));
		}
		if(s>=10)
		{
			a=s;
			goto end;
		}
		if(s==1)
printf("Case #%d: %lld is a Happy number.\n",x,c);
		else
			printf("Case #%d: %lld is an Unhappy number.\n",x,c);
	x++;
	}
	return 0;
}