#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the Number of Rows : ";
    cin>>n;
    /*for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<2*n;j++)
        {
            if(j<=2*n-1-i)
                cout<<" ";
            else if(k>1)
            {
                cout<<k;
                k--;
            }
            else
            {
                       cout<<k;
                       k++;
            }

        }

        cout<<"\n";
    }*/

    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<2*n;j++)
        {
            k=i;
            if(j<n+i && j>=n-i+1)
            {
                cout<<k;
                k--;
            }
        }

        cout<<"\n";
    }
    return 0;

}
