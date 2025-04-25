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
    cout<<endl;

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
    cout<<endl;    

    for(int i=1 ; i<=n ; i++)
    {
       for(int j=n ; j>=1 ;j--)
       {
         if(j==(n/2)+1 || i==1)
         cout<<"*";
         else{
            cout<<" ";
         }
        ;
       }
         cout<<endl;
    }
      cout<<endl;

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

    cout<<endl;

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