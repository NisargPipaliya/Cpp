#include<iostream>
#include<iomanip> //for setw
using namespace std;
void swap(int &m,int &n)
{
    int t;
    t=m;
    m=n;
    n=t;
}
int main()
{
    /*int m,n;
    cout<<"Enter M :";
    cin>>m;
    cout<<"Enter N :";
    cin>>n;
    cout<<"M="<<m<<" N="<<n<<endl;
    swap(m,n);
     cout<<"New M="<<m<<" New N="<<n<<endl;
     return 0;
     ######################################################
     int a;
     cin>>a;
     cout<<setw(5)<<a<<endl;
     cout<<setw(-5)<<a<<endl;
     float b;
     cin>>b;
     cout<<setw(5)<<b<<endl;
     int c;
     cin>>setw(2)>>c;
     cout<<setw(05)<<c;



     ##########################################
     int a,b,c;
     cout<<"Enter A : "<<endl;
     cin>>a;
     cout<<"Enter B : "<<endl;
     cin>>b;
     c=b;
if(a<b)
{
        if(a%2==0)
        {
            for(;a!=0;)
                {
                    a=a>>2;
                    b=b<<1;
                }
        }
        else
        {
            for(;a!=0;)
                {
                    a=a>>2;
                    b=b<<1;
                }
            b+=c;
        }
        cout<<b;
}
*/
/*
a=5   = (1+0+4)=(2^0 *1 + 0* 2^1 + 1*2^2)
b=4    =(0+0+4)
a=5,c=4,d=1
a=2 >> if statement will not run
a=1,c=4 +4<<2 =4+ 16=20 ,d=3 ,a=0
*/
int a,b,c,d;
c=d=0;
cin>>a>>b;
while(a)
{
    if(a%2)
    {
        c=c+(b<<d);
    }
    d++;
    a/=2;
}
cout<<c;
     return 0;
}
