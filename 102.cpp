#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
	long a,b,c,b1,b2,b3,c1,c2,c3,g1,g2,g3,min,bcg,bgc,cbg,cgb,gbc,gcb,n,i,s,k;
	while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)!=EOF)
	{
		bcg=0,bgc=0,cbg=0,cgb=0,gbc=0,gcb=0;
		bcg=b2+b3+g1+g2+c1+c3;
		bgc=b2+b3+g1+g3+c1+c2;
		cbg=b1+b3+g1+g2+c2+c3;
		gbc=b1+b3+g2+g3+c1+c2;
		cgb=b2+b1+g1+g3+c2+c3;
		
		gcb=b1+b2+g2+g3+c1+c3;
		
		min=bcg;
		if(bgc<min)min=bgc;
		if(cbg<min)min=cbg;
		if(cgb<min)min=cgb;
		if(gbc<min)min=gbc;
		if(gcb<min)min=gcb;

		if(bcg==min)printf("BCG %ld\n",min);
		else if(bgc==min)printf("BGC %ld\n",min);
		else if(cbg==min)printf("CBG %ld\n",min);
		else if(cgb==min)printf("CGB %ld\n",min);
		else if(gbc==min)printf("GBC %ld\n",min);
		else printf("GCB %ld\n",min);
	}

return 0;
}