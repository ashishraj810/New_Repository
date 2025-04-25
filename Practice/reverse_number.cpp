#include<iostream>
using namespace std;

int main()
{
    int number,remainder,ans=0;

    cout<<"enter the number:";
    cin>>number;

    while(number!=0)

    {
    remainder=number%10;
    ans=ans*10+remainder;
    number=number/10;
    }
    
    cout<<ans;

    return 0;
}