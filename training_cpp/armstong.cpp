#include<iostream>
using namespace std;

int main()
{
    int num = 1235;
    double armstrong = 0;
    int noofdigits == (int) log10(num)+1;
    while(num>0)
    {
        int rem = num%10;
        armstrogn=armstrong+pow(rem,noofdigits);
        num=num/10;

        if(org==armstrong)
        cout<<"Is Armstrong"<<endl;
        else
        cout<<"Not Armstrong"<<endl;
    }
    }