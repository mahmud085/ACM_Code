#include<cstdio>
#include<iostream>
//#include<cstring>
#include<stdlib.h>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
struct data
{
	char name[100001];
	
}x[100001];



int main()
{
	int a,j,n,k,i,l;
	char ch[31];
	map<string,int>sam;
	scanf("%d",&n);
	getchar();
	getchar();
	for(l=1;l<=n;l++)
	{
		
		i=0;int e=0;
		
		while(gets(ch))
		{
			sam[ch]++;
			e++;
			if(sam[ch]==1)
			{
				strcpy(x[i].name,ch);
				i++;
			}
			
		}
		float c;
		//sort();
		qsort (x, i, 100001, (int(*)(const void*,const void*)) strcmp);
		
		for(j=0;j<i;j++)
		{
			k=sam[x[j].name];
			c=(float(k)/float(e))*100.00;
		cout << x[j].name;
		printf(" %.4f\n",c);
		sam[x[j].name]=0;
		}
		if(l!=n)
			printf("\n");
		
	}
	return 0;
}



