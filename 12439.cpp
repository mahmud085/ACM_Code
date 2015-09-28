#include<cstdio>
#include<cmath>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdlib.h>
#include<iostream>
#include<map>
using namespace std;
map<string,int>mp;
void mapping()
{
	mp["January"]=1, mp["February"]=2, mp["March"]=3, mp["April"]=4, mp["May"]=5, mp["June"]=6, mp["July"]=7,mp["August"]=8;
	mp["September"]=9, mp["October"]=10, mp["November"]=11,mp["December"]=12;
}
bool lfyr(long w)
{
	if((w%4==0&&w%100!=0)||w%400==0)
		return true;
	else 
		return false;
}
int main()
{
	int n,t;
	char month1[10],date1[4],year1[12],month2[10],date2[4],year2[12];
	long y1,y2,sum,d1,d2,a,b,c,d,f,g,h,i,j;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		scanf("%s %s %s",month1,date1,year1);
		scanf("%s %s %s",month2,date2,year2);
		sscanf(year1,"%ld",&y1);
		sscanf(year2,"%ld",&y2);
		mapping();
		d1=0,d2=0,sum=0;
		for(i=0;i<2;i++)
		{
			a=date1[i]-48;
			d1=d1*10+a;
			b=date2[i]-48;
			d2=d2*10+b;
		}
		long e=0;
		if(y1<y2)
		{
					f=y2-y1+1;
					g=f/4;
					d=f/100;
					h=y1/400;
					e=y2/400;
					sum+=e-h+g-d+1;
					if(mp[month1]>2||(mp[month1]==2&&d1>29))
			sum--;
		if(mp[month2]<2||(mp[month2]==2&&d2<29))
			sum--;
		if(mp[month1]<2||(mp[month1]==2&&d2<=29))
			sum++;
					
			
		}
		else if(y1==y2)
		{
			if(lfyr(y1))
			{
				if((mp[month1]<=2&&mp[month2]>=2))
				{
					if((d1<=29&&mp[month2]==mp[month1])&&d2>=29)
						sum++;
					if(d1<=29&&mp[month2]>mp[month1])
					{
						if(mp[month2]>2)sum++;
						else
						{
							if(d2>=29)
								sum++;
						}
					}
				}
			}
		}
		
		printf("Case %ld: %ld\n",j,sum);
	}
	return 0;
}