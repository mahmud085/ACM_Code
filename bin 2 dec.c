#include <stdio.h>

int main()
{
  long int i,a,b,c,d;

scanf("%ld",&b);
  i=1;
  d=0;
  while(b!=0)
  {
    c=b%10;
    b=b/10;
    d+=c*i;
    i=i*2;
  }
printf("%ld", d);

  return 0;
}
