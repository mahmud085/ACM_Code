#include <stdio.h>
#include <string.h>

int arr[52];

int main()
{
int a,b,c,i;
char p[1000];
while(gets(p))
{
c=0;
a=strlen(p);
for(i=0;i<a;i++)
{
if(p[i]>='A' && p[i]<='Z')
{
b=p[i]-65;
arr[b]++;
}
else if(p[i]>='a' && p[i]<='z')
{
b=p[i]-71;
arr[b]++;
}
}
for(i=0;i<52;i++)
{
if(arr[i]>c)
c=arr[i];
}
for(i=0;i<52;i++)
{
if(i<26)
{
if(arr[i]==c)
printf("%c", i+65);
}
else
{
if(arr[i]==c)
printf("%c", i+71);
}
}
printf(" %d\n",c);
memset(arr,0,sizeof(arr));
}
return 0;
}