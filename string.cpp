#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    string s2(s1);
    char *b;
  //  cout<<s1<<endl;

    s1.assign("Hello World!");
    s2=s1;
    cout<<s1<<endl;
    cout<<s1.at(4)<<endl;

   s1.append("\nhELLO wORLD!!!!!\n");

    cout<<s1<<endl;
    //cout<<s1.capacity();

    //cout<<s1.compare(s2);
    //cout<<s1.compare(0,2,s2,0,2);
   // cout<<s1.compare(0,2,s2,0,3);
   //cout<<s1.compare(0,3,s2,0,2);

   //s2.empty();
   //cout<<s2;

  // s2.erase(3,5); ******************************************
   //cout<<s2<<endl;

   //cout<<s2.find("World")<<endl;

  // cout<<s2.length();

  s1.swap(s2);
  cout<<"s1 = "<<s1<<endl;
  cout<<"s2 = "<<s2<<endl;

return 0;
}

