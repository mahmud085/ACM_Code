#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<map>
using namespace std;
string num[100000];
map<string,long>sam;
int main()
{
	
	char s[100000];
	long b,c,i=0,j,k=0;
	while(cin>>s)
	{
		//scanf("%s",s);
		//if(strcmp(s,'\')==0)
		//	break;
		sam[s]++;
		//sscanf(a,"%ld",&c);
		if(sam[s]==1)
		{
			//strcpy(num[i],s);
			num[i]=s;
		
			i++;}
		k++;
	}
	for(j=0;j<i;j++)
	{
		cout<<num[j] <<" "<< sam[num[j]]<<endl;
	}
return 0;
}
