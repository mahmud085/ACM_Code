#include <map>
#include <string>
#include<cstdio>
#include<cstring>
#include <iostream>

using namespace std;

int main() {
  char tmp[31];
  map<string, int> sam;
  double e=0,k;
  int n,t;
  scanf("%d",&n);
  getchar();
  getchar();
  for(t=1;t<=n;t++)
  {
	  e=0;
	while (gets(tmp))
	{
		if(tmp[0]==' '||tmp[0]=='\0')
			break;
		sam[tmp]++;
		e++;
	}
	map<string,int>::iterator it;
  for (it= sam.begin(); it != sam.end();it++)
  {
	  cout << it->first << " ";
		k=it->second;
		k=(k/e)*100;
		printf("%.4lf\n",k);
  }
  sam.clear();
  if(t!=n)
	  printf("\n");
  }
  return 0;
}