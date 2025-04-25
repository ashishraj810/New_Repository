                //Sum of all the given digits of  a number//

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number :";
    cin>>number;

    int remainder,ans=0;
    while(number>0)
    {
        remainder=number%10;
        number=number/10;
        ans=ans+remainder;
    }

    cout<<"The sum of digits is "<<ans<<endl;

    return 0;
}