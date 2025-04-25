#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5;

    cout<<"enter the marks:"<<endl;

    cin>>m1;
    cin>>m2;
    cin>>m3;
    cin>>m4;
    cin>>m5;

    
    if(m1>m2 && m1>m3 && m1>m4 && m1>m5)
    {
        cout<<"m1 is greatest"<<endl;
    }

     else if(m2>m1 && m2>m3 && m2>m4 && m2>m5)
    {
        cout<<"m2 is greatest"<<endl;
    }

     else if(m3>m2 && m3>m1 && m3>m4 && m3>m5)
    {
        cout<<"m3 is greatest"<<endl;
    }

     else if(m4>m2 && m4>m3 && m4>m1 && m4>m5)
    {
        cout<<"m4 is greatest"<<endl;
    }

     else if(m5>m2 && m5>m3 && m5>m4 && m5>m1)
    {
        cout<<"m5 is greatest"<<endl;
    }
    else{
        cout<<"invalid input"<<endl;
    }
    return 0;

    
}