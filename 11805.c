#include<stdio.h>
int main()
{
int N,K,P,i,j,T,x=1;
scanf("%d",&T);
for(j=1;j<=T;j++)
{

 scanf("%d %d %d",&N,&K,&P);
for(i=1;i<=P;i++)
{
	K++;
	if(K>N)
{K=1;}
}
printf("Case %d: %d",x,K);
x++;
printf("\n");
}


return 0;
}