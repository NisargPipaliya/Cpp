#include<iostream>
using namespace std;
class abc
{
        int x;
    public:
        void get_v()
        {
            cout<<x;
        }
         void set_v()
        {
            cout<<"enter x: ";
           cin>>x;
        }
};
class xyz
{
public:
    friend class abc;
    abc e1;
    int f1;
};
int main()
{
    xyz x1;
    x1.e1.set_v();
    x1.f1=2;
    x1.e1.get_v();
    cout<<" "<<x1.f1;
    return 0;
}
