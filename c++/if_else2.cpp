#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<=5)
    {
        cout<<"infant"<<endl;
    }
    else if((age>=18)&&(age<60))
    {
        cout<<"adult"<<endl;
    }
    else if(age>=60)
    {
        cout<<"senior citizen"<<endl;
    }
    else{
        cout<<"teenager"<<endl;
    }
    return 0;
}