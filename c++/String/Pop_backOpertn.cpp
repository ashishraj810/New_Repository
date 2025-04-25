     //pop_back operation is used to remove a character from last in a string//

#include<iostream>
using namespace std;

int main()
{
    string s1="Ashish" , s2=" " , s3="Raj";
    string s4=s1.append(s2).append(s3);
    cout<<s4<<endl;
    s4.pop_back();
    cout<<s4;

    return 0;
}