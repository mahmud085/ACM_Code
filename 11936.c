#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if((a+b)<=c||(b+c)<=a||(a+c)<=b)
		{
			printf("Wrong!!\n");
		}
		else
			printf("OK\n");
	}return 0;
}
