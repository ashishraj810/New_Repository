//program to test weather a no. is divisible by 3 or 5.


#include<iostream>
using namespace std;

int main()
{
    int b;
    cin>>b;

    if((b%3==0) || (b%5==0))
    {
        cout<<"it is divisible by 3 or 5."<<endl;
    }
    else
    {
        cout<<"invalid input."<<endl;
    }

    return 0;
}