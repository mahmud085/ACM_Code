#include<stdio.h>
#include<string.h>
char arr[1000000];
int main()
{
	long a,b,c,d,s,i,j,k,n,cnt,l;
	scanf("%ld",&n);
	getchar();
	while(n--)
	{
		scanf("%s",arr);
		l=strlen(arr);
		scanf("%ld",&a);
		getchar();
		cnt=0;
		for(k=1;k<=a;k++)
		{
			scanf("%ld",&b);
		
			if(b==1)
			{cnt++;}
			else
			{
				s=0;
				for(i=0;i<l;i++)
				{
					c=s*10+arr[i]-48;
					d=c%b;
					s=d;
				}
				if(d==0)
					cnt++;
			}
		}
		if(strcmp(arr,"0")==0)
			printf("%s - Wonderful.\n",arr);
		else if(cnt==a)
			printf("%s - Wonderful.\n",arr);
		else
			printf("%s - Simple.\n",arr);
	}
	return 0;
}