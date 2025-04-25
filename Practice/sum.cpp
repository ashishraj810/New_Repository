#include<iostream>
using namespace std;

int main()
{
    int number=12,remainder,ans=0;
  

    while(number>0)
    {
        remainder=number%10;
        ans=ans+remainder;
        number=number/10;
    }
    cout<<ans;

    return 0;
}