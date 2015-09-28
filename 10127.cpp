#include<stdio.h>
int main()
{
	long long a,b,c=0,d,i,j,k,n,s;
	while(scanf("%lld",&n)!=EOF)
	{

		
		c=1;a=1;
		for(j=1;;j++)
		{   if(a%n==0)
			break;
			else
			{
				a=a*10+1;
				a=a%n;
			}
		}
		//	while(a!=0)
			//{
				//b=a%10;
					//a=a/10;
					//if(b==1)
						//c++;
			//}
		printf("%lld\n",j);
	}
	return 0;
}
