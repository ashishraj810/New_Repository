             //we will perform arithematic operations in array using pointers.

#include<iostream>
using namespace std;

int main()
{
    int arr[10]={2,5,7,12,3,9,6,14,17,1};
    int *ptr=arr;

    //Addition
    ptr=ptr+5;
    cout<<*ptr<<endl;

    //subtraction
    ptr=ptr-3;
    cout<<*ptr<<endl;

    //print elements by skipping a value every time

    

    return 0;
}             