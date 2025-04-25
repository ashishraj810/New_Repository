#include<iostream>
using namespace std;

bool prime(int n)
{
    if(int n<2)
    {
        return 0;
    }
   
    
    for(int i=2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
                                                                                                                  
    }
    return 1;
    }



int fact(int n)
{
    int num=1;
    for(int i=1 ; i<=n ; i++)
    {
        num=num*i;
    }
    return num;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a:";
    cout<<"Enter the value of b:";
    cin>>a>>b;

    cout<<prime(a);
    cout<<fact(a);
    cout<<prime(b);
    cout<<fact(b);
    cout<<prime(a-b);
    cout<<fact(a-b);

    return 0;
}