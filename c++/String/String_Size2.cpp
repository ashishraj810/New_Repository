        //Find the size of a string without use of s.size//

#include<iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int size=0;

    while(s1[size]!='\0')
    {
        size++;
    }

    cout<<size;

    return 0;
}
