                 //sum of digits of a number to a single digit//

#include<iostream>
using namespace std;
                 
int main() 
{
    int num;
    cout<<"Enter the number :";
    cin>>num;

    int remainder,ans=0;
    while(num>9)
    {
    while(num>0)
    {
        remainder=num%10;
        num=num/10;
        ans=remainder+ans;
    }

    num=ans;
    }

    return num;
}     