#include<stdio.h>
int main()
{
int t,i,Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3,Average,x=1,T;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
	scanf("%d %d %d %d %d %d %d",&Term1,&Term2,&Final,&Attendance,&Class_Test1,&Class_Test2,&Class_Test3);
	if(Class_Test1>Class_Test2)
	{
		if(Class_Test2>Class_Test3)
		Average=(Class_Test1+Class_Test2)/2;
		else
			Average=(Class_Test1+Class_Test3)/2;
	}
	else
	{
		if(Class_Test1<Class_Test3)
		Average=(Class_Test2+Class_Test3)/2;
		else
			Average=(Class_Test1+Class_Test2)/2;
	}
	T=(Term1+Term2+Final+Attendance+Average);
	if(T>=90)
		printf("Case %d: A",x);
	else if(T>=80&&T<90)
		printf("Case %d: B",x);
	else if(T>=70&&T<80)
		printf("Case %d: C",x);
	else if(T>=60&&T<70)
		printf("Case %d: D",x);
	else if(T<60)
		printf("Case %d: F",x);
	x++;
printf("\n");
}
return 0;
}