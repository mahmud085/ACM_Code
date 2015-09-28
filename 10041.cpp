#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int a[40000],c,d,i,j,k,l,n,s,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
       {        
            
             scanf("%d",&r);
             for(j=1;j<=r;j++)
             {
               scanf("%d",&a[j]);
             }
             sort(a,a+r);
             for(k=1;k<=r;k++)
             {c=0;
				 for(l=1;l<=r;l++)
				 {
					c+=abs(a[l]-a[k]);
				 }
				 if(k==1)
					 s=c;
				 if(c<s)
					 s=c;
             
             }
             printf("%d\n",s);
       }
       return 0;
}
             
                    
                    
