#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
        if(i==j)
        cout<<"*";
        }
    

    for(j=1 ; j<=n-i ; j++)
    {
        cout<<" ";
    }

    for(j=1 ; j<=n ; j++)
    {
        if(j==i)
        cout<<"*";
    }
    cout<<endl;
    }

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(i==j)
            {
                cout<<"*";
            }
        }
        for(j=1 ; j<=n-i ; j++)
        {
            cout<<" ";
        }
        for(j=n ; j>=1 ;j++)
        {
            if(i==j)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

}
