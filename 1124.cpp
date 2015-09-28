#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int b,c,d,i,j,k;
	while(gets(a))
	{
		b=strlen(a);
		for(i=0;i<b;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}