
using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
int main()
{
    int a=0,A,b=0,B,c=0,C,M,d=0,D,i=1;
    int arr[5845];
    arr[0]=1;
    while(i<5845)
    {
        A=arr[a]*2;
        B=arr[b]*3;
        C=arr[c]*5;
        D=arr[d]*7;
        M=min(A,min(B,min(C,D)));
        if(A==M)
        {
            arr[i++]=A;
            a++;
        }
        else if(B==M)
        {
            arr[i++]=B;
            b++;
        }
        else if(C==M)
        {
            arr[i++]=C;
            c++;
        }
        else if(D==M)
        {
            arr[i++]=D;
            d++;
        }
        if(i>=2)
        if(arr[i-1]==arr[i-2])i--;
    }
    while(cin>>M)
    {
        if(!M) break;
        a=arr[M-1];
        string str;
        b=M%100;
        if(b<=19 && b>=11) str="th";
        else if(M%10==1) str="st";
        else if(M%10==2) str="nd";
        else if(M%10==3) str="rd";
        else str="th";
        cout<<"The "<<M<<str<<" humble number is "<<arr[M-1]<<"."<<endl;
    }
}
