                    //How to get the address of a variable created//

#include<iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<&a<<endl;
    int *ptr1=&a;
    cout<<ptr1<<endl;

    float b=223;
    float *ptr2=&b;
    cout<<ptr2<<endl;

    char c='z';
    char *ptr3=&c;
    cout<<ptr3<<endl;

    return 0;
}