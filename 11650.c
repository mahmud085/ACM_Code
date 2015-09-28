#include<stdio.h>
int main()
{
	int t,a,b,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d:%d",&a,&b);
		
		
		if(a>0&&a<12)
			a=(12-a);
		
		if(b>0&&b<60)
		{a=a-1;
		b=60-b;}
		if(a==0)
			a=12;
		if(a==0&&b==0||a==12&&b==0)
		a=12;
		printf("%02d:%02d",a,b);
	
	printf("\n");
	}
	return 0;
}