                  //Reverse any given Integer//

#include<iostream>
using namespace std;

int main()
{
    int number,temp;
    cout<<"Enter the number :";
    cin>>number;
    temp=number;

    int remainder,ans=0;

    while(number!=0)

    {
    remainder=number%10;
    number=number/10;
    ans=ans*10+remainder;
   
    }

    cout<<"The reverse of "<<temp<<" is "<<ans<<endl;
}