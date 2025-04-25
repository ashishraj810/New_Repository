#include<iostream>
using namespace std;

int main()
{
    int num=24;
    int i=2;

    

    while(num>1)
    {
        if(num%i==0 && i<num)
        {

        num=num/i;
        cout<<i<<" ";
       
        }
    else
    i++;
    }
}