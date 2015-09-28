#include<stdio.h>
#include<iostream>
using namespace std;
class TREE
{
    public:
    TREE();
	~TREE();
    float n1,n2;
    char op,nil;
    float add(float,float);
    float sub(float,float);
    float product(float,float);
    float divide(float,float);

double  absoluteValue (double x)
         {
         if ( x < 0 )
         x = -x;
         return x;
         }
void add()
{
        int su,e;
	cout<<"\n\nHOW MANY NUMBERS THAT YOU WANT TO SUM ? ";
	cin>>su;
	cout<<"\n\nENTER "<<su<<" NUMBERS: ";
	double s=0,p[1000];
	for (e=0;e<su;e++)
	{
		cin>>p[e];
		s+=p[e];
	}
	cout<<"\n    ";
	for (e=0;e<su;e++)
	{
		if (e!=su-1)
			cout<<p[e]<<"+";
		else
			cout<<p[e]<<"=";
	}
	cout<<s<<"\n\n";
}
void substract()
{
    cout<<"     ENTER THE NUMBER: ";
	cin>>n1>>op>>n2;
        if(op=='-')
        cout<<"\n   "<<n1<< op <<n2<<" = "<<sub(n1,n2);
}
void mul()
{
    	cout<<"\n\nHOW MANY NUMBERS THAT YOU WANT TO PRODUCT ? ";
	int su,e;
	cin>>su;
	cout<<"\n\nENTER "<<su<<" NUMBERS: ";
	double s=1,p[1000];
	for (e=0;e<su;e++)
	{
		cin>>p[e];
		s*=p[e];
	}
	cout<<"\n    ";
	for (e=0;e<su;e++)
	{
		if (e!=su-1)
			cout<<p[e]<<"*";
		else
			cout<<p[e]<<"=";
	}
	cout<<s<<"\n\n";;

}
void devide()
{
	cout<<"     ENTER THE NUMBER: ";
    cin>>n1>>op>>n2;
    if(op=='/')
	{
		if(n2==0)
			cout<<"\n    CANNOT DIVIDED BY ZERO";
		else
        cout<<"\n   "<<n1<< op <<n2<<" = "<<divide(n1,n2);
	}
}
void rootover()
    {
        double x;
        const double  accu = 0.00001;
        double        g   = 1.0;
        cout<<"     ENTER A NUMBER: ";
        cin>>x;
        if(x<0)
        cout<<"\n         MATH ERROR";
        else if(x==0)
        cout<<"\n    Rott "<<x<<" = 0";
        else
        {
        while  ( absoluteValue (g * g - x) >= accu )
        g = ( x / g + g ) / 2.0;
        cout<<"\n    Root "<<x<<" = "<<g;
        }
    }

void square()
    {
        int squ;
		cout<<"     ENTER A NUMBER: ";
        cin>>squ;
        cout<<"\n   "<<squ<<" ^ "<<squ<<" = "<<squ*squ;
    }
void cube()
    {
        int cub;
		cout<<"     ENTER A NUMBER: ";
        cin>>cub;
        cout<<"\n   "<<cub<<" ^ 3"<<" = "<<cub*cub*cub;
    }
void topower()
{
	int a,b,i;
	cout<<"ENTER TWO NUMBER: ";
	cin>>a>>b;
	long s=1;
	for(i=1;i<=b;i++)
		s=s*a;
	cout<<"\n    "<<a<<" ^ "<<b<<" = "<<s;
}
void tenpower()
{
	int a,i;
	cout<<"ENTER A NUMBER: ";
	cin>>a;
	long s=1;
	for(i=1;i<=a;i++)
		s=s*10;
	cout<<"\n     10 ^ "<<a<<" = "<<s;
}

void inverse()
    {
        double inv;
        cout<<"\n  ENTER A NUMBER: ";
        cin>>inv;
		if(inv==0)
			printf("\n    CANNOT DEVIDE BY ZERO");
		else
        cout<<"\n     "<<(1/inv);
    }
};
TREE::TREE()                            //constructor
{
    cout<<"\n                      BISMILLAHIR RAHMANIR RAHIM\n";

	cout<<"                    ******************************\n\n";


	cout<<"Please Enter your choice \n\n";

	cout<<"Press any key \n\n\n";

	cout<<"  1. Addition	        2. Subtraction           3. Multiplication\n\n";

	cout<<"  4. Division           5.x^y                    6.10^x \n\n";

	cout<<"  7. Square	        8. Cube	                 9. Inverse\n\n";

	cout<<" 10. Square Root       11. Combination	        12. Permutation\n\n";
	
	cout<<" 13. Factorial	       14. Scientific Functions\n\n\n";

	//cout<<"Press any number between 1-14 :   ";
}
TREE::~TREE()
{
	cout<<"\n\n";

		cout<<"\n\n         ********THANK YOU**********\n\n";


}
float TREE:: sub(float m1,float m2)
{
    return(m1-m2);
}


float TREE:: divide(float m1,float m2)
{
    return(m1/m2);
}
class BRANCH : public TREE
{
    public:
    double sin(double);
    double cose(double);
void expo()
    {
        double e,k,h,sum,g,t_sum,p;
		cout<<"    PRESS A NUMBER : ";
        cin>>e;p=e;
        for(k=1,h=1,sum=0;;k++,h=p){
	    e=e*h;
	    g=fact(k);
		t_sum=e/g;
	if(t_sum<=0.001)
	{
		sum=t_sum+sum;
		cout<<"\n\n     e ^ "<<e<<" = "<<sum+1;
		break;
	}
	else sum=t_sum+sum;
    }
    }
void ln()
    {
        double x;
		cout<<"    PRESS A NUMBER : ";
        cin>>x;
        if (x<=0)
		cout<<" \n\n            MATH ERROR.";
	else
	{
		int i,j;
		double e,r,s,v,t,q;
		s=0.00;
		t=x-1;
		v=x+1;
		e=t/v;
		for (i=1;i<=25;i=i+2)
		{
			r=1;
			q=1/i;
			for (j=1;j<=i;j++)
				r*=e;
			s+=r/i;
		}
		q=s*2;
		cout<<"\n  ln(" << x << ")="<<q;
	}
    }
double fact(double i)
    {
        double factorial,j;
	for( j=1.0,factorial=1.0;j<=i;j++)
		factorial=factorial*j;
	return factorial;
    }
void cos()
    {
        double x,sum;
       cout<<"\n    PRESS A NUMBER IN DEGREE: ";
		cin>>x;
        int j=x/90;
        sum=cose(x);
        if(j%2!=0&&j!=0)
        cout<<"\n    Cos(" << x << ")= 0";
        else
		cout<<"\n    Cos(" << x << ")="<<sum;
	}
void sine()
	{
	    double deg,res;
        cout<<" \n   PRESS A NUMBER IN DEGREE: ";
		cin>>deg;
        int j=deg/90;
        res=sin(deg);
        if(j%2==0&&j!=0)
		cout<<"\n    Sin(" << deg << ")= 0";
        else
        cout<<"\n    Sin(" << deg << ")="<<res;
	}
void tan()
	{
	    double k,i;
	    cout<<"\n    PRESS A NUMBER IN DEGREE: ";
		cin>>k;
	    i=k;
	int j=k/90;

	    k=sin(k)/cose(k);
		if(j%2!=0)
			cout<<"\n     MATH ERROR";
		else if(j%2==0&&j!=0)
		cout<<"\n    Tan(" << i << ")= 0";
		else
	    cout<<"\n    Tan(" << i << ")="<<k;
	}
};
double BRANCH::sin(double deg)
{
     double PI=3.1415926535897932384626433832795,ACC=0.001;
	    double rad,res,term;
        int i,j,k;
    rad=(PI*deg)/180;
        res=rad;
        term=rad;
        i=2;
        while(1)
        {
        if(term<0)
        {
        if(-term<ACC)break;
        }
        else
        {
        if(term<ACC)break;
        }
        term*=-((rad/i)*(rad/(i+1)));
        res+=term;
        i+=2;
        }
        return res;
}

double BRANCH::cose(double x)
{
	 double p=3.1415926535897932384626433832795,d,t,w;
	d=p*x/180;
	 double s=0;
	int i,j,c=0;
	for(i=0;i<18;i+=2)
	{
	w=1;t=1;
	for(j=1;j<=i;j++)
		{
			w*=j;
			t*=d;
		}
	c++;
	if (c%2==1)
		s+=t/w;
	else
		s-=t/w;
	}
	return (s);
}
class LEAF : public BRANCH
{
    public:
    void combination()
    {
        double n,k,a,b,c,d,i,x,p,sum,h;
		cout<<"ENTER TWO NUMBER: ";
        cin>>n>>k;
        if(n<k)
        cout<<"\n\n          MATH ERROR";
        else
        {
        c=n,d=k;
        x=n-k;if(x>k)p=k;else p=x;
        for(i=0,sum=1;i<p;i++,n--)
        sum=sum*n;
        for(i=p,a=1;i>0;i--,p--)
        a=a*p;
        h=sum/a;
        cout<<"\n    "<<c<<"C"<<d<<" = "<<h;
        }
    }
    void permutation()
    {
        double n,k,a,b,c,d,i,x,p,sum,h;
		cout<<"ENTER TWO NUMBER: ";
        cin>>n>>k;
        if(n<k)
        cout<<"\n\n         MATH ERROR";
        else
        {
        c=n,d=k;
        x=n-k;if(x>k)p=k;else p=x;
        for(i=0,sum=1;i<p;i++,n--)
        sum=sum*n;
        for(i=p,a=1;i>0;i--,p--)
        a=a*p;
        h=sum/a;
        h=h*fact(k);
        cout<<"\n    "<<c<<"P"<<d<<" = "<<h;
        }
    }
    void facto()
    {
        double f;
		cout<<"ENTER A NUMBER: ";
        cin>>f;
        cout<<"\n       "<<f<<" ! = "<<fact(f);
    }
};
int main()
{
	int n,d;
    char choice2,nil;
LEAF A;

	cout<<"Press any number between 1-14 :   ";
    cin>>n;
    cout<<"\n\n";
    if(n==1)
	{
		A.add();

	}
    else if(n==2)
    {
		A.substract();}
    else if(n==3)
    {A.mul();}
    else if(n==4)
    {A.devide();}
    else if(n==5)
	{A.topower();}
	else if(n==6)
	{A.tenpower();}
	else if(n==7)
    {A.square();}
    else if(n==8)
    {A.cube();}
    else if(n==9)
    {A.inverse();}
    else if(n==10)
    {A.rootover();}
    else if(n==11)
    {A.combination();}
    else if(n==12)
    {A.permutation();}
    else if(n==13)
    {A.facto();}
   else if(n==14)
    {
cout<<"                       SCIENTIFIC FUNCTION  \n\n";
cout<<" PLEASE SELECT A NUMBER BETWWEN 1-5:  \n\n";
cout<<"1. (ln x)      ";
cout<<"2. (exp)        ";
cout<<"3. (Sin x)       ";
cout<<"4. (Cos x)       ";
cout<<"5. (Tan x) \n\n               ";
cout<<"\n    PRESS A NUMBER  : ";
cin>>choice2;

if(choice2=='1')
A.ln();
if(choice2=='2')
A.expo();
if(choice2=='3')
A.sine();
if(choice2=='4')
A.cos();
if(choice2=='5')
A.tan();
    }
   else
     cout<<"         SORRY! YOU HAVE CHOSSEN A WRONG NUMBER.CHOOSE NUMBER CORRECTLY\n\n";
cout<<"\n\n\n\n";
cout<<"         DO U WISH TO CONTINUE.\n\n        PRESS Y FOR YES OR PRESS N FOR NO:";
 cin>>nil;
    if(nil=='Y' || nil=='y')
    main();



return 0;
}



