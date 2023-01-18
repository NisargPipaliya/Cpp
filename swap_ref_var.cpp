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
     */
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
     return 0;
}
