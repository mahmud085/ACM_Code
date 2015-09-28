#include<stdio.h>
#include<string.h>
int main()
{
	int b,c,i,j;
	char a[10000];
	while(gets(a))
	{	
		c=0;
		b=strlen(a);
		for(i=0;i<=b;i++)
		{	
			if(a[i]==' '||i==b)
			{	
				for(j=i;j>c;j--)
				{
					if(a[j-1]!=' ')
					printf("%c",a[j-1]);
				
				}
			c=i;
			if(i!=b)
			printf(" ");	
			}
		
		}
		printf("\n");
	}
	return 0;
}