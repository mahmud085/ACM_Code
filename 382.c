#include<stdio.h>
int main()
{
	long i,s,n;
	printf("PERFECTION OUTPUT\n");
	while(scanf("%ld",&n),n!=0)
	{	
		
		s=0;
	if(n<=60000)
	{
		

		for(i=1;i<n;i++)
		{
			if(n%i==0)
			{
				s+=i;
			}
		}
		if(n==s)
			printf("%5ld  PERFECT\n",n);
		else 
		{
			if(s>n)
			printf("%5ld  ABUNDANT\n",n);
			if(s<n)
				printf("%5ld  DEFICIENT\n",n);
		}
	}

	}printf("END OF OUTPUT\n");
	return 0;
}