#include<iostream>
using namespace std;

int main()
{
    int n,i,prdt=1;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
       prdt=prdt*i;
    }

    cout<<prdt;

    return 0;
}