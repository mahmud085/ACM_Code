#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,h,e,f,g,i;
while(scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f)!=EOF)
{
g=pow((c-a),2)+pow((d-b),2);
i=pow((c-e),2)+pow((d-f),2);
if(i<=g)
{
h=i*2*3.141592653589793;
printf("%.2f",h);
}
else
{
h=g*2*3.141592653589793;
printf("%.2f",h);
}
printf("\n");
}
return 0;
}