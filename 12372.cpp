#include<stdio.h>
int main()
{
	int a,b,c,d,x=1,i;
scanf("%d",&d);
for(i=0;i<d;i++)
{
	scanf("%d %d %d",&a,&b,&c);
	if((a>20||b>20||c>20))
		printf("Case %d: bad\n",x);
	else
			printf("Case %d: good\n",x);
	x++;
}
return 0;
}