#include<stdio.h>
int main()
{
	long int i,N,G,L;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%ld %ld",&G,&L);
		if(L%G==0)
			printf("%ld %ld",G,L);
		else
			printf("-1");
	printf("\n");
	}


return 0;
}