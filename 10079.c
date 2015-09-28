#include<stdio.h>
int main()
{
 long a,i,b;
	while(scanf("%ld",&a),a>=0)
	{
		b=1;
		for(i=1;i<=a;i++)
		{	b=b+(i*1);}
	printf("%ld",b);
	printf("\n");
	}
	return 0;
}