#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,g,m,s;
	char ch;
	while(1)
	{
		scanf("%f%c%f",&a,&ch,&b);
	if(a==0&&b==0&&ch==':')
		break;
	if(a>6)
	{
		d=12-a;
		c=5*d;
		f=b/12;
		d=c-f;
       	if(b>30)
			{
                g=60-b;
                e=g-d;
            }
		else
		{
			g=b;
        	e=d+g;
		}
    }
	else
	{
        d=a;
		f=b/12;
		c=5*d;
		d=c+f;
        	if(b>30)
			{
              g=60-b;
                e=d+g;
			}
		else
		{
			g=b;
        	e=g-d;
		}
    }
	

	s=6*e;
	
	
	if(s>180)
		s=360-s;
	if(s<0)
	s*=-1;
	
		printf("%.3f\n",s);
	
	}
	return 0;
}
