#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    int a=20;
    ptr = &a;
    cout<<ptr<<endl;   //prints address of a//
    cout<<*ptr<<endl;        //prints the value inside a//

    int b=30;
    ptr=&b;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

//when the value of  is updated//
    
    b=b+5;
    cout<<*ptr<<endl; 

//print the of a and b//

    cout<<sizeof(b)<<endl;
    cout<<sizeof(a);

    return 0;
}