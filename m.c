#include<stdio.h>
long a[1000],x[1000],g[1000],e[1000];
int main()
{
long i=0,j,b,z,s,c,d,k,n,m,l;
scanf("%ld",&m);
for(l=0;l<m;l++)
{
scanf("%ld",&z);
n=z;
c=0;
d=0;
for(;n!=0;)
{
a[i]=n%2;
n=n/2;
i++;
}
for(j=i-1;j>=0;j--)
{
if(a[j]==1)
c++;
}
i=0;
while(1)
{
x[i]=z%10;
z=z/10;
i++;
if(z==0)
break;
}
k=0;
j=0;
while(1)
{
n=x[k];
for(;n!=0;)
{
e[j++]=n%2;
n=n/2;
}
k++;
if(k==i)
break;
}
for(i=j-1;i>=0;i--)
{
if(e[i]==1)
d++;
}
printf("%ld %ld\n",c,d);
}

return 0;
}