#include <iostream>
using namespace std;
int main()
{
    cout<<typeid(5).name()<<endl;
    cout<<typeid('5').name()<<endl;
    cout<<typeid(false).name()<<endl;
    cout<<typeid(34L).name()<<endl;
    cout<<typeid((short)5).name()<<endl;
    cout<<typeid(5.0).name()<<endl;
    cout<<typeid(0.5F).name()<<endl;
    cout<<typeid("hello").name()<<endl;

    return 0;

}