#include<iostream>
using namespace std;

int main()
{
    int a=23;
    cout<<sizeof(a)<<endl;  //4

    char name = 'a';
    cout<<sizeof(name)<<endl;  //1
    
    bool pen;
    a==name? pen=true : pen=false;  //0
    cout<<pen<<endl;

    int y=(2,3,4,5,6,78);
    cout<< y<<endl;  //78

    cout<<(&a)<<endl;

    return 0;
 
}