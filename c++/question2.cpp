//program to print a no. divisible by both 3 an 5.


#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if((a%3==0)&&(a%5==0))
    {
        cout<<"It is divisible by both 3 and 5."<<endl;
    }
    else
    {
        cout<<"invalid input."<<endl;
    }
    return 0;

}