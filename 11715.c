#include<stdio.h>
#include<math.h>
int main()
{
	float u,v,t,d,s,a;
	int x=1,num;
	while(scanf("%d",&num),num!=0)
	{
	switch(num)
	{
	case 1:
		scanf("%f %f %f",&u,&v,&t);

		d=v-u;
		a=d/t;
		s=((v*v)-(u*u))/(2*a);
		printf("Case %d: %.3f %.3f",x,s,a);
		break;
	case 2:
		scanf("%f %f %f",&u,&v,&a);
		t=(v-u)/a;
		s=((v*v)-(u*u))/(2*a);
		printf("Case %d: %.3f %.3f",x,s,t);
		break;
	
	case 3:
		scanf("%f %f %f",&u,&a,&s);
		v=sqrt((u*u)+(2*a*s));
		t=(v-u)/a;
		printf("Case %d: %.3f %.3f",x,v,t);
		break;
    case 4:
		scanf("%f %f %f",&v,&a,&s);
		u=sqrt((v*v)-(2*a*s));
		t=(v-u)/a;
		printf("Case %d: %.3f %.3f",x,u,t);
		break;
	}
	printf("\n");
		x++;}
return 0;
	}