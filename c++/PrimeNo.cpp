#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the value of n:";
    cin>>n;

    if(n<2)
    {
        cout<<"its not a prime";

    }

    else 
    {
        for(i=2 ; i<n ; i++)
        {
        if(n%i==0)
        {
        cout<<"Its not prime";
        return 0;
        }
        }

        cout<<"Its a Prime";
    }

     

      return 0;
    
    
}