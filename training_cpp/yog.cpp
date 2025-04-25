#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size"<<endl;

    cin>> size;
    int a[size];
    cout << "Enter  "<< size << "  elements :- " <<endl;
    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<size;i++)
    {cout<<a[i];
    }
}