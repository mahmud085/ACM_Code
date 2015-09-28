#include<stdio.h>
#include<string.h>
int main()
{
	char a[101][101];
	int b,c,d,i,j,k,l,n,s,x=1;
	while(scanf("%d\n",&n),n!=0)
	{
		for(i=0;i<n;i++)
		
			gets(a[i]);
			//l=strlen(a[i]);
		printf("Case %d:\n",x);
		printf("#include<string.h>\n");
		printf("#include<stdio.h>\n");
		printf("int main()\n{\n");
		for(j=0;j<n;j++)
		{
			 printf("printf(\"");
			l=strlen(a[j]);
			for(k=0;k<l;k++)
			{
				if(a[j][k]=='\"')
				printf("\\\"");
				else if(a[j][k]=='\\')
					printf("\\\\");
				else
				printf("%c",a[j][k]);
			}
			printf("\\n\");\n");
        }
        printf("printf(\"\\n\");\nreturn 0;\n}\n");
	x++;
	}
	return 0;
}
