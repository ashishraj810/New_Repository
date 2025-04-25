#include<iostream>
using namespace std;

int main()
{
    int x=5;
    int y=7;

    int z=(x<4 && y++);   //if false && anything else gives--false.......true||anything gives--true
    cout<<y;
}