#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    int a[argc],ans=0;
    int i;
    for(i=0;i<argc;i++)
    {
        a[i]=int(*argv[i]);
        ans+=a[i];
    }
    ans=float(ans/argc);
    cout<<"Average of numbers is : "<<ans<<endl;
    return 0;
}
