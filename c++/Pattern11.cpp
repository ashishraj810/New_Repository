#include<iostream>
using namespace std;

int main()
{
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=5 ; j++)
        {
            char name='a'+j-1;
            cout<<" "<<name;
        }
        cout<<endl;
    }
}