    // for a given string check if it is a Pangram or not 

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string :";
    getline(cin,s);

    vector<bool> alpha(26,0);

    for(int i=0 ; i<s.size() ; i++)
    {
        alpha[s[i]-'a']=1;
    }

    for(int i=0 ; i<26 ; i++)
    {
        if(alpha[i]==0)
        {
            cout<<"0";
            return 0;
        }
    }

    cout<<"1";
    return 1;
}