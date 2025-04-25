      //To check whether a give string is  a Palindrome//

#include<iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);

    int start=0 , end=s1.size()-1;
    while(start<end)
    {
        if(s1[start]!=s1[end])
        {
            cout<<"Oops!! It's not a Palindrome.";
            return 0;
        }
        start++,end--;        
        
    }

    cout<<"Yeah!! It's a Palindrome.";



    return 0;
}