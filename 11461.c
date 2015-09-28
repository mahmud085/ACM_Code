#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,s,i;
while(scanf("%d %d",&a,&b),a!=0&&b!=0)
{s=0;

for(i=a;i<=b;i++)
{
	c=sqrt(i);
	d=c*c;
	if(d==i)
		s++;

}
printf("%d\n",s);
}
return 0;
}