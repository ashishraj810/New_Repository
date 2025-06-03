    //  Defanging an IP Address

#include<iostream>
using namespace std;

int main()
{
    string address="123.671.451.116";

    int index=0,start=0,end=address.size();
    string ans;

    while(index<address.size())
    {
        if(address[index]=='.')
        ans=ans+"[.]";

        else 
        ans=ans+address[index];
        index++;
    }
    cout<<ans;

    
}