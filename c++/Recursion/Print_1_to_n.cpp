                //print 1 to n using Recursion approach//

#include<iostream>
using namespace std;

void print(int num,int n)
{
    if(num==n)
    cout<<num<<endl;
    return;

    cout<<num<<endl;
    print(num+1,n); 

}

int main()
{ 
    int n;
    cin>>n;
    print(1,n);
}