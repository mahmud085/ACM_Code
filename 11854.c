#include<stdio.h>
int main()
{
int a,b,c;
while(scanf("%d %d %d",&a,&b,&c),a!=0&&b!=0&&c!=0)
{
	if((a*a)==(b*b)+(c*c))
		printf("right");
	else if((b*b)==(a*a)+(c*c))
        printf("right");
else if((c*c)==(a*a)+(b*b))
        printf("right");
else
        printf("wrong");
        printf("\n");
}
	return 0;

}