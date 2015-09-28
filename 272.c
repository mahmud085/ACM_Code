#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int b,c=1,d,i,j,k,l;
	while(gets(a))
	{
		l=strlen(a);
		for(i=0;i<l;i++)
		{	
			
			if(a[i]=='"')
			{
				if(c%2!=0)
				{
					printf("``");
					c++;
				}
				else
				{
					printf("''");
					c++;
				}
			}
			
			else
			printf("%c",a[i]);
		}
		printf("\n");
	}

return 0;
}