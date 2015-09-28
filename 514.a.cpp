    #include<iostream>
    using namespace std;
    int main(void)
    {
        int N,i,stack[1001],permutation[1001],top,per,j;
        while(cin>>N&&N)
        {
            while(cin>>permutation[1])
            {
                if(permutation[1]!=0)
                {
                    for(i=2;i<=N;i++)
                        cin>>permutation[i];             
                    top = 0;
                    per = 1;
                    for(i=1;i<=N;i++)
                    {
                        if(permutation[per]==i)
                        {
                            per++;
                           while(permutation[per]==stack[top]&&stack[top]>0)
                            {
                                top--;
                                per++;
                            }
                        }
                        else
                        {
                            top++;
                            stack[top] = i;
                        }
                    }
                    if(top==0)
                        cout<<"Yes"<<endl;
                    else
                        cout<<"No"<<endl;
                }
                else
                {
                    cout<<endl;
                    break;
                }
            }
        }
        return 0;
    }
