#include<stdio.h>
#include<string.h>
int main()
{
	char a[83];
	int b,c,d,e,i,j,k,l,n,s;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		while(gets(a))
		{
			l=strlen(a);
			for(j=0;j<l;j++)
			{
				if(a[j]=='3')
					printf("E");
				else if(a[j]=='0')
					printf("O");
				else if(a[j]=='1')
					printf("I");
				else if(a[j]=='4')
					printf("A");
				else if(a[j]=='9')
					printf("P");
				else if(a[j]=='5')
					printf("S");
				else if(a[j]=='8')
					printf("B");
				else if(a[j]=='7')
					printf("T");
				else if(a[j]=='2')
					printf("Z");
				else if(a[j]=='6')
					printf("G");
				else
					printf("%c",a[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
