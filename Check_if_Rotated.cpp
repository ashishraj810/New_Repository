    // Check if a string is rotated 2 times or not 

#include<iostream>
using namespace std;

void rotateanticlockwise(string &s)
{
    char c=s[0];
    int index=1;

    while(index<s.size())
    {
        s[index-1]=s[index];
        index++;
    };

    s[s.size()-1]=c;
}

void rotateclockwise(string &s)
{
    char c=s[s.size()-1];
    int index=s.size()-2;

    while(index>=0)
    {
        s[index+1]=s[index];
        index--;
    };

    s[0]=c;
}


int main()
{
    string str1;
    cout<<"Enter the original string:";
    getline(cin,str1);
    string str2;
    cout<<"Enter the rotated string:";
    getline(cin,str2);


    if(str1.size()!=str2.size())
    {
    cout<<"The two strings are not same.";
    return 0;
    }

    string clockwise,anticlockwise;

    clockwise=str1;
    rotateclockwise(clockwise);
    rotateclockwise(clockwise);

    if(clockwise==str2)
    {
        cout<<"YES! Its rotated clockwise twice.";
        return 0;
    }

    anticlockwise=str1;

     rotateanticlockwise(anticlockwise);
     rotateanticlockwise(anticlockwise);

     if(anticlockwise==str2)
     {
        cout<<"YES! Its rotated anticlockwise twice.";
        return 0;
     }

     cout<<"Its not rotated or they are not same string.";
    
return 0;

}