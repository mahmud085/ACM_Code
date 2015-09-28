#include<stdio.h>
int main()
{
	char a[1000];
	int i,c,j;
	while(gets(a))
		{
	for(i=0;a[i]!='\0';i++)
	{
		j=a[i];
	c=j-'\a';
	printf("%c",c);	
	}
printf("\n");
		}
	return 0;
}