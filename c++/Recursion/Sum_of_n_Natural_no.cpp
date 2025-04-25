           // To find sum of n natural numbers using recursive approach. //

#include<iostream>
using namespace std;

int SumofIntegers(int n)
{
    if(n==1)
    return 1;
    
    return n+SumofIntegers(n-1);
}

int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<SumofIntegers(n)<<endl;

    
}