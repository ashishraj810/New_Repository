                     //Binary to decimal conversion//

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int remainder,ans=0,mult=1;

    while(num>0)
    {
    remainder=num%2;
    num=num/10;
    ans=remainder*mult+ans;
    mult*=2;
    }

    cout<<ans;
}