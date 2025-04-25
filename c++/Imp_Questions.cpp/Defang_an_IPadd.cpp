               //Defanging an ip address using cpp//

#include<iostream>
using namespace std;

int main()
{
    string ans;
    ans=1.3.6.2.4;
    string index=0,address;

    while(index < address.size())
    {
        if(address[index]=='.')
        {
            ans=ans+"[.]";
        }
        else
        {
            ans=ans+address[index];
        }
      
    }
    cout<<ans<<endl;
}