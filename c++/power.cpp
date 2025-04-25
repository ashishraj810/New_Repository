#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int n,p,i,num;
    num=n;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the value of power :";
    cin>>p;

    for(i=1 ; i<p; i++)
    {
        num=num*n;
    }

    cout<<num;

    return 0;
}