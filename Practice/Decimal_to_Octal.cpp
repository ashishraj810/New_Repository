          //Convert Decimal to Octal//

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
    remainder=num%8;
    num=num/8;

    ans=remainder*mult+ans;
    mult=mult*10;
    }

    cout<<"The converted number is "<<ans<<endl;

    return 0;
}