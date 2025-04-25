            //To reverse a given string//

#include<iostream>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);

    int start=0,end=s1.size()-1;
    while(start<end)
    {
        swap(s1[start],s1[end]);
        start++,end--;
    }

    cout<<s1<<endl;

    int size=0;
    while(s1[size]!=0)
    {
        size++;
    }

    cout<<size;

    return 0;
}