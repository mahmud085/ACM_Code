 #include<stdio.h>
int main()
{
	int i,j,n,s;
	int a[1000],t;
	while(scanf("%d",&n)!=EOF)
	{s=0;
	for(i=1;i<=n;i++)
		scanf("%f",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		s++;
			}
		else
			continue;
		}
	}
	printf("Minimum exchange operations : %d\n",s);
	}return 0;
}