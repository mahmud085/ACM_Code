#include<stdio.h>
//#include<conio.h>
#include<string.h>
int main()
{
//clrscr();
int l,a,b,c,i,j,n;
char s[1000];
gets(s);
l=strlen(s);
c=0;a=0;
for(i=0;i<=l;i++)
{
 c++;
 if(s[i]==' '||i==l)
 {
 for(j=i-1;j>=a;j--)
{
printf("%c",s[j]);
}
 printf(" ");
a=a+c;
c=0;
}
}
//getch();
return 0;
}
