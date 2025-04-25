#include<iostream>
using namespace std;

int main()
{
    int price;
    cin>>price;

    (price>=200)? cout<<"buy book" : cout<<"will see next time"<<endl;
    (price<=500)? cout<<"dont buy book" : cout"will see next time"<<endl;

    return 0;
    }