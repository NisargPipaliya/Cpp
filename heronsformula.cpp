#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,p,area;
    cout<<"**************************\nProgram to find area of triangle...\n**************************";
    cout<<"\nEnter the value of side A of triangle";
    cin>>a;
    cout<<"\nEnter the value of side B of triangle";
    cin>>b;
    cout<<"\nEnter the value of side C of triangle";
    cin>>c;
    p=(float)(a+b+c)/2;
    area=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"The area of triangle is : "<<area;
    return 0;


}
