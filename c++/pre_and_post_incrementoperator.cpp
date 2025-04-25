#include<iostream>
using namespace std;
int main()
{
    int a=23;
    cout<<(a++)<<endl;  //23
    int w=34;
    cout<<(++w)<<endl;  //35

    int b=20;
    cout<<(b--)<<endl;  //20
    int q=45;  
    cout<<(--q)<<endl;  //44

    return 0;
}