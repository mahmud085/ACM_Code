#include<stdio.h>
#include<string.h>
 int main()
 {
  unsigned long long sum;
  int t,c,final,num,i,j,k,len,n[200];
  char ch[10001],x[102];
  while(scanf("%d\n",&t)==1)
  {    ch[10001]='\0'; x[102]='0';
     for(k=1;k<=t;k++)
      {
       sum=0;
       scanf("%d\n",&final);
       for(j=1;j<=final;j++)
        {
         scanf("%c %d\n",&x[j],&n[j]);
        }
       scanf("%d\n",&num);
       for(j=1;j<=num;j++)
        {
         gets(ch);
         len=strlen(ch);
         for(i=1;i<=final;i++)
          {
           for(c=0;c<len;c++)
             {
              if(x[i]==ch[c])
				  sum+=n[i];
             }
          }
        }
       printf("%.2f$\n",sum/100.00);
      }
    }
return 0;
 }