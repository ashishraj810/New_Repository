#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        for(int j=n;j>=1 ;j--)
        {
            if(i==1|| i==n  || j==n)
            {
                cout<<"*";
            }
           else cout<<" ";
        }
        cout<<endl;
    }
       for(i=1 ; i<=n; i++)
       {
        for(int j=1 ; j<=n ; j++)
        {
            if(j==n||i==n)
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
    
    
        
