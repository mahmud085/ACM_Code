#include<stdio.h>
int main()
{
	int a,b,c[100],d[100],i,s,j,k=1;
	while(1)
	{s=0;
		scanf("%d %d",&a,&b);
	if(a==0&&b==0)
		break;
		for(i=0;i<a;i++)
	
		scanf("%d",&c[i]);
		for(j=0;j<b;j++)
			scanf("%d",&d[j]);
	
		if(a>b)
	a=b;
	else
		a=a;
	for(i=0;i<a;i++)
	{	if(c[i]>=d[i])
			s++;
	}

	
printf("Twin Towers #%d\n",k);

printf("Number of Tiles : %d\n\n",s);
	k++;
	}
	
return 0;
}
