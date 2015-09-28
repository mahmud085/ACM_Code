#include<cstdio>
#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
struct data
{
	char name[1000];
	
}x[1000];
int i;
void sort()
{
	for(int j=0;j<i;j++)
	{
		for(int k=j+1;j<i;j++)
		{
			if(strcmp(x[j].name,x[k].name)>0)
			{
				data tmp;

                      tmp = x[j];
                      x[j] = x[k];
                      x[k] = tmp;
			}
		}
	}
}
map<string,int>sam;
int main()
{
	int a,j,n,l;
	char ch[1000];
	scanf("%d\n\n",&n);
	for(l=1;l<=n;l++)
	{
		string s,d[10000];
		i=0;
		
		while(gets(ch))
		{
			sam[ch]++;
			
			if(sam[ch]==1)
			{
				strcpy(x[i].name,ch);
				i++;
			}
			
		}
		float c;
		//sort();
		qsort (x, i, 1000, (int(*)(const void*,const void*)) strcmp);

		for(j=0;j<i;j++)
		{
			c=sam[x[j].name]*3.4483;
		cout << x[j].name<<" "<<c<<endl;
		//	printf("%d %s\n",c,x[j].name);
		}
		if(l!=n)
			printf("\n");
		
	}
	return 0;
}



