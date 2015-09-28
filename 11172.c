#include<stdio.h>
int main()
{int t,i;
long int a,b;
scanf("%ld",&t);
for(i=0;i<t;i++)
{
	scanf("%ld %ld",&a,&b);
	if(a>b)
		printf(">");
	if(a<b)
		printf("<");
		if(a==b)
			printf("=");
		printf("\n");}
return 0;

}