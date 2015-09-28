#include<stdio.h>
int main()
{
int i,j,x,y,c,G,N;
int GCD(int i,int j);
while(scanf("%d",&N),N!=0)
{
G=0;
	for(i=1;i<N;i++)
		for(j=i+1;j<=N;j++)
		{
			G=G+GCD(i,j);
		}	   		 

printf("%d",G);
printf("\n");
}
}
int GCD(int x,int y)	
{int c;
	while(y%x!=0)
	{
	c=y%x;
y=x;
x=c;
}
	return(x);	

}

