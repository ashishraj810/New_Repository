#include<iostream>
using namespace std;

int sum(int x, int y)
{
    int ans=x+y;
    return ans;
}

int mult(int p,int q)
{
    int ans=p*q;
    return ans;
}

int sub(int e,int r)
{
    int ans=e-r;
    return ans;
}

int main()
{
    int a,b;
    cout<<"Enter 2 numbers :";
    cin>>a>>b;

   cout<<sum(a,b);
   cout<<endl;
   cout<<mult(a,b)<<endl;
   cout<<sub(a,b);

}