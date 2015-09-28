#include<stdio.h>
#include<math.h>
int main()
{
int t,n;
long double X,Y;
scanf("%d",&n);
for(t=1;t<=n;t++)
{
scanf("%Lf",&Y);
printf("\n");
	X=sqrt(Y);	
printf("%.0Lf",X);

printf("\n\n");
}
return 0;

}