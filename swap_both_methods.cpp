#include<iostream>
using namespace std;
int main()
{
    //method 1
    int a,b,t;
    cout<<"Enter the value of A : "<<endl;
    cin>>a;
    cout<<"Enter the value of B : "<<endl;
    cin>>b;
    t=a;
    a=b;
    b=t;
    cout<<"The value of A is "<<a<<"\tThe value of B is "<<b;
    //method 2
    int x,y;
    cout<<"\nEnter the value of X : "<<endl;
    cin>>x;
    cout<<"Enter the value of Y : "<<endl;
    cin>>y;
    x+=y;
    y=x-y;
    x=x-y;
    cout<<"The value of X is "<<x<<"\t The value of Y is "<<y;
    return 0;

}
