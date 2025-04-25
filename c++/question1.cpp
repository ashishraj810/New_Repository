#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;

    if((a%2==0)&&(a%3==0))
    {
        cout<<"It is even and divisible by 3."<<endl;
    }
    else
    {
        cout<<"it is invalid"<<endl;
    }
    return 0;

    

}