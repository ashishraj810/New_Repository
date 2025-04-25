#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        for(j=i ; j<=n ; j++)
        {
            cout<<" ";
        }

        for(j=1 ; j<=2*i-1 ; j++)
        {
          if(j==1||j==2*i-1||i==(n/2)+1)
          {
            cout<<"*";
          }
          else
          {
             cout<<" ";
          }
              
            
        }
        cout<<endl;
    }
}