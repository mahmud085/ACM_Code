#include<stdio.h>
int main()
{
int H1,H2,M1,M2,G,K,L;
while(1)
{	  
scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
if(H1==0&&H2==0&&M1==0&&M2==0)
   break;

	K=(H2*60)+M2;
	G=(H1*60)+M1;
	if(K>G)
	
	{	L=K-G;}
	else
	{
		G=(24*60)-G;
		K=(0*60)+K;
		L=G+K;
	}
	printf("%d\n",L);
}
return 0;
}