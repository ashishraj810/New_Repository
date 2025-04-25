#include<iostream>
using namespace std;
int main()
{
    int digit,n;
    cout<<"Enter the digits:";
    cin>>digit;
    int temp=0;

    while(n>0)
    {
        temp++;
        digit=digit/10;
        cout<<temp;
    }

    




    
}