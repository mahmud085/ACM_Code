#include<stdio.h>
long dif(long a,long b);
int main()
{
   
    long n,p,x[10099],r=0,s,m,j,min,k;
    while(scanf("%ld",&n)==1)
   {
    for(long i=0;i<n;i++)
    scanf("%ld",&x[i]);
    scanf("%ld",&p);
    r=0;
    for(k=0;k<n-1;k++)
   {
      for(j=k+1;j<n;j++)
      {
         if(x[k]+x[j]==p)
         {
            min=dif(x[k],x[j]);
            {
               if(r==0)
                  s=min;
                   r=1;
               if(min<=s)
                  s=min;
               else
                  continue;
               m=x[k];
               n=x[j];
            }
         }
      }
   }
   if(m>n)
   {
      s=m;
       m=n;
      n=s;
   }
   int cs;
   if(cs==1)
      printf("\n");
   cs=1;
   printf("Peter should buy books whose prices are %ld and %ld.\n",m,n);
   }
   return 0;
     
}

long dif(long a,long b)
{
    if(a<=b)
      return b-a;
      else
    return a-b;
} 