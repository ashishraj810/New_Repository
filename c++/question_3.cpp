#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    ((a%3==0) || (a%5==0))? cout<<"it is divisible by 3 or 5"<<endl : cout<<"invalid input."<<endl;

    return 0;
}