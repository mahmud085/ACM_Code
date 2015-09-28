#include<stdio.h>
#include<math.h>
//#include<algorithm>
//using namespace std;
int main()
{
	int a[50000],b,c,f,n,l,i,t,j;
	double d,s;
	scanf("%d",&n);
		for(l=0;l<n;l++)
	{
			s=0;
		for(i=1;;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]==0)
			{f=i-1;
				break;
			}
		}
		//sort(a,a+n);
		for(i=1;i<=f-1;i++)
		{
		for(j=1;j<=f-i;j++)
		{
			if(a[j]<=a[j+1])
			{
				t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		
			}
		else
			continue;
		}
	}
		for(j=1;j<=f;j++)
		{
			d=a[j];
			s+=2*pow(d,j);
		}
		if(s>5000000)
			printf("Too expensive\n");
		else
			printf("%.0lf\n",s);

	}
	return 0;
}