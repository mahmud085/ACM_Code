#include<stdio.h>
#include<string.h>
//char a[501];
int main()
{
	int b,c,d,e=1,i,j,k,m,w,n,s,l;
	char a[501];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		d=0;m=0;
		scanf("%d",&b);
		getchar();
		printf("Case %d:\n",e);
		for(j=0;j<b;j++)
		{
			gets(a);
			l=strlen(a);
			for(k=0;k<=l;k++)
			{
				if(a[k]==' ')
					d++;
				else
				{
					if(d>=1)//&&a[k]!='\0')
					{
						printf(" ");
						//q[w++]=' ';
					d=0;
					}
					if(a[k]!='\0')
					printf("%c",a[k]);
					//q[w++]=a[k];
				}
			}
			printf("\n");
		}
		if(i!=n-1)
			printf("\n");
		e++;
	}
	
	return 0;
}

	
