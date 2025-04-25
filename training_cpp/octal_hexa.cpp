#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x=10;
    cout<<setw(5)<<"Dec"<<setw(5)<<"Oct"<<setw(5)<<"Hex"<<endl;
    for(x=0;x<20;x++)
    {
        cout<<setw(5)<<Dec<<x;
        cout<<setw(5)<<Oct<<x;
        cout<<setw(5)<<Hex<<x<<endl;

    }

}