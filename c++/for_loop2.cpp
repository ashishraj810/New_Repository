#include<iostream>
using namespace std;

int main()
{
    

    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
      cout<<i<<endl;  
    }
    if (n==0)
    {
      cout<<" Oops!! How can one count from zero.";
    }
    return 0;



}