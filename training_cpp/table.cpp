//write a cpp code to print table of a no. which should be aligned
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n=555555;
    int i;
    for( i=1;i<11;i++)
    {
    cout<<n <<" X ";
    cout<<setw(2)<<i;
    cout<<"="<<setw(3)<<n*i<<endl;

    }
}
