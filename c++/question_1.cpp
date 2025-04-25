//method 2 of solving question 1
#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    if(a%6==0)
    {
        cout<<"it is even and divisible by 3."<<endl;
    }
    else
    {
        cout<<"invalid data."<<endl;
    }
    return 0;
}