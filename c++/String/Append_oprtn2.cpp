            //u can use s.append(s1) also to add or combine two strings//

#include<iostream>
using namespace std;

int main()
{
    string s1="Ashish" , s2=" " , s3="Raj";
    string s4=s1.append(s2).append(s3);
    cout<<s4;

    return 0;
}