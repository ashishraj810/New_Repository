#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b:";
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=23.345,f2=56.234;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<endl;

    return 0;
}