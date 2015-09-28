#include<stdio.h>
#include<string.h>
int main()
{
	int i,c,s;
	char a[1000];
	while(gets(a))
	{
	s=strlen(a);
	c=0;
	for(i=0;i<s;i++)
	{
		if(((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) && (a[i+1] < 'a' || a[i+1] > 'z') && (a[i+1] < 'A' || a[i+1] > 'Z'))

		{
			c++;
		}
		
	}
	printf("%d\n",c);
	
	}
	return 0;
}