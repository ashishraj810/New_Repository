                   //Convert decimal to binary//

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number :";
    cin>>num;

    int mult=1,ans=0,remainder;

    while(num>0)
    {
    remainder=num%2;
    num=num/2;

    ans=remainder*mult+ans;
    mult=mult*10;
    }

    cout<<"The Binary form is "<<ans<<endl;

    return 0;
}