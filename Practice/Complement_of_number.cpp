                    // To find the complement of a number//

#include<iostream>
using namespace std;

int main()
{
    int num,temp;
    cout<<"Enter the number :";
    cin>>num;
    temp=num;

    int ans=0,remainder,mult=1;

    while(num>0)
    {
    remainder=num%2;
    remainder=remainder^1;
    num=num/2;
    ans=ans+remainder*mult;
    mult=mult*2;
    }

    cout<<"The complement of "<<temp<<" is "<<ans<<endl;

    return 0;
}