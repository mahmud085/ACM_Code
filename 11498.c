#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,i,j,n,s;
	while(scanf("%d",&n),n!=0)
	{
		scanf("%d %d",&a,&b);
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&c,&d);
			if((a==c||b==d)||(a==c&&b==d))
				printf("divisa\n");
			else if(c>a&&d>b)
				printf("NE\n");
			else if(c<a&&d>b)
				printf("NO\n");
			else if(c<a&&d<b)
				printf("SO\n");
			else if(c>a&&d<b)
				printf("SE\n");
		}
	}
	return 0;
}