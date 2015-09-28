#include<stdio.h>
int main()
{
	int n;
 long a,b;
	
while(scanf("%d",&n)!=EOF)
{	
//	b=1;
//	if(n>7&&n<14)
//	{
	
//for(a=n;a>=1;a--)
//{
//	b=b*a;
//}
//	}
	if(n<0)
	{
		if(n%2==0)
			printf("Underflow!\n");
		else
			printf("Overflow!\n");
	}
else if(n<8)
printf("Underflow!\n");

 //if(n>7&&n<14)
//printf("%I64d\n",b);
else if(n>13)
printf("Overflow!\n");
else if(n==8)
printf("40320\n");
else if(n==9)
printf("362880\n");
else if(n==10)
printf("3628800\n");
else if(n==11)
printf("39916800\n");
else if(n==12)
printf("479001600\n");
else if(n==13)
printf("6227020800\n");
}
return 0;
}