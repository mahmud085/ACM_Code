#include<stdio.h>

int main()
{
long int n,k,r,f,g;
int i,j;
while(scanf("%ld%ld",&n,&k),n!=0&&k!=0)
{
if(n==0 && k==0) 
break;
g=1;
if(k>n/2) 
k=n-k;
for(i=n,j=1;i>k,j<=k;i--,j++)
{
g*=i;
g/=j;
}
printf("%ld\n",g);
}
return 0;
}
