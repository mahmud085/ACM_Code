#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{

	int i,j,d,n,m,t;
	char a[10001];
	char h[10];
	gets(h);
	sscanf(h,"%d",&t);
	for(m=1;m<=t;m++)
	{
	gets(a);
	d=strlen(a);
	n=sqrt(d);
	if(d==(n*n))
	{	
		for(i=0;i<n;i++)
		{
		for(j=i;j<d;j+=n)
			
				printf("%c",a[j]);
				
		}
printf("\n");
	}
	else
		printf("INVALID\n");
	}
	return 0;
}
