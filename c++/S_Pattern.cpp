#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(i==j||i==1||i==n)
            {
                cout<<"*";
            }

        }
       cout<<endl;

       for(j=1 ; j<=n ; j++)
       {
        if(j==n||i==n)
        {
            cout<<"*";
        }
        else{
            cout<<" ";
        }
       }
       cout<<endl;
        
    }


}