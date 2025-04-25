            //To find the factorial of a number using Recursive approach//

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1|| n==0)              //base condition//
    return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout<<"Enter the numnber :";
    cin>>n;

    if(n<0)
    {
        cout<<"Invalid input.";
        return 0;
    }

    cout<<fact(n);
}