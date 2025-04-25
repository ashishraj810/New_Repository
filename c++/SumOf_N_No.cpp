#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int sum=0;
    cout<<"Enter the value of n:";
    cin>>n;
    
    for(i=0 ; i<=n ; i++)
    {
        sum=sum+i;
    }

    cout<<sum;

    return 0;
}