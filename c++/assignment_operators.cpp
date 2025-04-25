#include<iostream>
using namespace std;
int main ()
{
    int num1=7;
    int num2=4;

    cout<<(num1+=2)<<endl; //9
    cout<<(num2+=3)<<endl; //7
    cout<<(num1-=5)<<endl; //2
    cout<<(num2-=4)<<endl; //0
    cout<<(num1/=7)<<endl; //1
    cout<<(num2/=2)<<endl; //2
    cout<<(num1%=5)<<endl; //2
    cout<<(num2%=3)<<endl; //1

    return 0;
}