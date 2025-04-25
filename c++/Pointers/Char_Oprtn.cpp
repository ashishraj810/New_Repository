         //using Char Array and use of (void*) and ststic_cast<void*>//

#include<iostream>
using namespace std;

int main()
{
    char arr[5] = "1234";
    char *ptr = arr;
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;
    cout<<static_cast<void*>(arr)<<endl;
    cout<<static_cast<void*>(ptr)<<endl;

    char name='a';
    cout<<(void*)&name<<endl;

return 0;
}