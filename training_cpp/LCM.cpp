#include<iostream>
using namespace std;

int main()
{
    int x=12, y=15;
    if(x==y)
    {
        cout<<y<<endl;
        return 0;
    }

    int maxi = (x>y)? x:y;
    while (maxi%x!=0)
}