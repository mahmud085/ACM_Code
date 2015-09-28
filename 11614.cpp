#include<stdio.h>
#include<math.h>
int main()
{
unsigned long c,s,m,n,i,k,t;
scanf("%lu",&t);
for(k=0;k<t;k++)
{//s=0;
scanf("%lu",&n);
c=sqrt(1+4*2*n)-1;

printf("%lu\n",c/2);
}
return 0;
}
