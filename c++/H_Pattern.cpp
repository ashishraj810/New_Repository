#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=n;j>=1 ;j--)
        {
            if(j==n || j==1||i==(n/2)+1)
            {
                cout<<" *";
            }
           else cout<<"  ";
        }
         cout<<endl;
    }
}