#include<stdio.h>
#include<string.h>
char a[1000000];
	char b[1000000];
int main()
{
	
	int c,e,f,i,j,k;
	while(scanf("%s",a)!=EOF)
	{	scanf("%s",b);
		k=0;
		e=strlen(a);
		f=strlen(b);
		for(i=0;i<e;i++)
		{
			for(j=k;j<f;j++)
			{
				if(a[i]==b[j])
				{
					c=0;
					goto end;
				}
				else
					c=1;
			}
				end:
				k=j+1;
		}
		if(c==0)
			printf("Yes\n");
		if(c==1)
			printf("No\n");
	}
	return 0;
}
			