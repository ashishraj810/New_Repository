#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the Year:";
    cin>>year;

    if(year%400 == 0)
    {
        cout<<"It's a Leap Year.";
    }

    else if(year%4 == 0 && year%100 != 0)
    {
        cout<<"It's a Leap Year.";
    }

    else
    {
        cout<<"Oops! It's not a Leap Year.";
    }

    return 0;
}