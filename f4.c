#include<stdio.h>
int main()
{
long int b,c,i,n;
while(1)
{
scanf("%ld",&n);
if(n==0)
break;
printf("PERFECTION OUTPUT\n");
c=0;
for(i=1;i<n;i++)
{ b=n%i;
if(b==0)
c=c+i;
}

if(c==n)
printf("%5ld PERFECT\n",n);
else if(c<n)
printf("%5ld DEFICIENT\n",n);
else if(c>n)
printf("%5ld ABUNDANT\n",n);
printf("END OF OUTPUT\n");
}
return 0;
}