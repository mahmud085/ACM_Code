#include<stdio.h>
#include<string.h>
int main()
{
long long a,b,c,d,e,ar[10000],i,j,k;
while(scanf("%lld %lld %lld",&a,&b,&c)!=EOF)
{
d=1;
e=a;
i=0;
while(b!=0)
{
ar[i++]=b%2;
b=b/2;
}
for(j=0;j<i;j++)
{
if(ar[j]==1)
d=(d*e)%c;
e=(e*e)%c;
}
d=d%c;
printf("%lld\n",d);
}
return 0;
}