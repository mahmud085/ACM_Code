#include<stdio.h>
int a,s,d=1,i,j,k;
int arr[1010];
void pre(void)
{
	for(i=1;i<=1000;i++)
	{
		for(j=i;j>=1;j--)
		{s=0;
			for(k=1;k<=j;k++)
			{
				if(j%k==0)
				{
					s+=k;
				}
			}
			if(s==i)
			{
				arr[i]=j;
				break;
			}
		}
	}
}
int main()
{
	pre();
	while(scanf("%d",&a),a!=0)
	{
		if(arr[a]!=0)
		printf("Case %d: %d\n",d,arr[a]);
		else
			printf("Case %d: -1\n",d);
		d++;
	}
	return 0;
}