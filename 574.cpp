#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
vector<int>res;
int ar[100],tak[100];
int sum=0,a,i;
void call(int b,int sum)
{
	if(sum==a)
	{
		cout<<sum<<" "<<a<<endl;
		int w=0;
		for(int j=0;j<res.size();j++)
		{
			if(w)
				cout<<"+";
			cout<<res[j];
			w=1;
		}
		cout<<endl;
		return;

	}
	else
	{
		for(int i=0;i<b;i++)
		{
			if(tak[i]==0)
			{
				tak[i]=1;
				cout<<"i= "<<i<<endl;
				sum=sum+ar[i];
				cout<<"sum= "<<sum<<endl;
				res.push_back(ar[i]);
				call(b,sum);
				tak[i]=0;
				res.pop_back();
				sum=0;
			//	cout<<"sum= "<<sum<<endl;
			}
		}
	}
}

int main()
{
	int b,c,d,l,m,n,j,k;
	while(1)
	{
		cin>>a>>b;
		if(b==0)
			break;
		for(i=0;i<b;i++)
			cin>>ar[i];
		call(b,0);
	}
	return 0;
}
