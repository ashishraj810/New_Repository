//implicit type conversion.
#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    bool a= false;
    char b= a;
    short c=b;
    int d=c;
    long e=d;
    float f=e;
    double g=f;
    cout<<typeid(g).name();
}