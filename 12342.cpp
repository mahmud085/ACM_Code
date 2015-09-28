#include<stdio.h>
int main()
{
	long a,b,c,d,i,j,k,n,x=1;
	double t;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a);
		if(a<=180000)
			t=0;
		else if(a>180000&&a<=480000)
		{
			c=a-180000;
			t=.1*c;
		}
		else if(a>480000&&a<=880000)
		{
			c=a-480000;
			t=(.15*c)+30000;
		}
		else if(a>880000&&a<=1180000)
		{
			c=a-880000;
			t=(.2*c)+90000;
		}
		else if(a>1180000)
		{
			c=a-1180000;
			t=(.25*c)+90000+60000;
		}
		if(t>0&&t<2000)
			printf("Case %ld: 2000\n",x);
		else
		{j=t;
			if(t>j&&t<j+1)
		printf("Case %ld: %ld\n",x,j+1);
			else
				printf("Case %ld: %ld\n",x,j);
		}

		x++;
	}
	return 0;
}