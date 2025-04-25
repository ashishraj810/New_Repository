                   //To Check wheather a given number is a palindrome or not//

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the string :";
    cin>>num;
    int remainder,ans=0;

    while(num>0)
    {
       remainder=num%10;
       num=num/10;
       ans=ans*10+remainder;

       if(num==ans)
    {
        cout<<"Its a Palindrome.";
    }
    else
    {
        cout<<"Its not a Palindrome.";
    }

    }

    
    return 0;
    
}