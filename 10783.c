#include<stdio.h>
int main()
{
int a,b,i,j,s,x=1,t;
scanf("%d",&t);
for(i=0;i<t;i++)
{   s=0,
	scanf("%d\n%d",&a,&b);
	for(j=a;j<=b;j++)
	{
		if(j%2!=0)
			s=s+j;
	}
		printf("Case %d: %d\n",x,s);
		x++;
}
return 0;


}