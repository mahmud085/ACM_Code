#include<stdio.h>
#include<string.h>
char a[110];
char b[110];
int main()
{
	
	int c,f,i,j,k,l,n;
	//while(1)
	//{c=0;
	while(scanf("%d %s",&n,a),n!=0&&a!=0)
		
	{l=strlen(a);
	f=0;
		for(i=0,j=0;i<l;i++)
		{
			if(a[i]-48==0&&n==0)
				break;
			if((a[i]-48)!=n)
			{	
				if(a[i]-48!=0&&a[i-1]-48!=0)
				{f=1;
				b[j]=a[i]-48;
				c++;
				j++;
				}
				
			}
			
		}
		if(f==1)
		{
		for(k=0;k<j;k++)
		{	


			printf("%d",b[k]);
		}}
		else
			printf("0");
		printf("\n");
	}
	return 0;
}
