#include<cstdio>
#include<cstring>
#include<string>
#include<map>
#include<iostream>
using namespace std;
char ch[76],ch2[76];
int main()
{
	int n,i;
	map<string,int>sam;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%s",&ch);
		sam[ch]++;
		gets(ch2);
	}
	map<string,int>::iterator it;
	for(it=sam.begin();it!=sam.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
