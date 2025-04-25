#include<iostream>
using namespace std;
int main()
{
    int num1=5;
    cout<<(~num1)<<endl;  //10
    cout<<(num1<<1)<<endl;  //10
    cout<<(num1>>1)<<endl;  //10

     int num2=3;
    cout<<(num1|num2)<<endl;  //7
    cout<<(num1&num2)<<endl; //1
    cout<<(num1^num2)<<endl;  //6

    return 0;
}