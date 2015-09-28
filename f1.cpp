#include<stdio.h>
int main()
{

int a,e,i,j,k,l,n,m,s[1000],t[1000],b;
for(b=1;;b++)
{

scanf("%d",&n);
if(n<0)
break;

for(i=0;i<12;i++)
{
scanf("%d",&s[i]);
}

for(j=0;j<12;j++)
{
scanf("%d",&t[j]);
}
printf("Case %d:\n",b);
for(k=0;k<1;k++)
{
if(n>t[k])
{
printf("No problem! :D\n");
e=n-t[k];
}
else if(n<t[k])
{
printf("No problem. :(\n");
e=n;
}
}

m=0;

for(l=0;l<11;l++)
{a=s[l]+e;
if(a>t[m+1])
{ printf("No problem! :D\n");
e=a-t[m+1];
}
else
{
printf("No problem. :(\n");
e=a;
}
m++;
}
printf("\n");
}
return 0;
}