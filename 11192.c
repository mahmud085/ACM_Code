#include<stdio.h>
#include<string.h>
int main()
{
	int n,b,c,d,e,i,j,s;
	char a[101];
	while(scanf("%d",&n),n!=0)
	{c=0;d=0;
	scanf("%s",&a);
	s=strlen(a);
	e=s/n;
	for(i=0;i<s;i++)
		{	c++;
			if(c==e)
			{	
				for(j=i;j>=d;j--)
				{
					printf("%c",a[j]);
				
				}
			c=0;
			d=i+1;	
			}
		
		}
	printf("\n");
	}
	return 0;
}