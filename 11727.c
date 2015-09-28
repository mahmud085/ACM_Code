#include<stdio.h>
int main()
{
int a,b,c,t,i,x=1;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
	scanf("%d %d %d",&a,&b,&c);
	{
		if((a>b)&&(a>c)&&(b<c))
			printf("case %d:%d",x,c);
	}
	{
		if((c>a)&&(c>b)&&(b<a))
			printf("case %d:%d",x,a);
	}
	{
		if((c>a)&&(c>b)&&(a<b))
			printf("case %d:%d",x,b);
	}
	
	printf("\n");x++;

}
}