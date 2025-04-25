          //Print 1 to n Even numbers using recursive approach//

#include<iostream>
using namespace std;

void printeven(int num,int n)
{
    if(num>n)
    return;

    cout<<num<<endl;
    printeven(num+2,n);
}

int main()
{

}